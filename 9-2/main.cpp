#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

struct Student {
    string name;
    string lastname;
    int score;
    string grade;
    bool highestTestScore;
};

const int NUM_STUDENTS = 20;

void readData(vector<Student>& studunts);
void studentsGrade(vector<Student>& students);
void highestGrade(vector<Student>& students);
void writeStudentsData(const vector<Student>& students);

int main() {
    vector<Student> students;

    // read the data
    readData(students);

    // calculate the grade
    studentsGrade(students);

    // fint the highest score
    highestGrade(students);

    // write students data
    writeStudentsData(students);
    
    return 0;
}

void readData(vector<Student>& students) {
    ifstream datafile("/Users/mityakim/Desktop/Learn_C/9-2/Ch9_Ex2Data.txt");

    if (!datafile) {
        cerr << "Couldn't open file.\n";
        exit(1);
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        Student student;
        datafile >> student.name >> student.lastname >> student.score;
        students.push_back(student);
    }

    datafile.close();
}

void studentsGrade(vector<Student>& students) {
    for (Student& student : students) {
        if (student.score >= 90) {
            student.grade = "A";
        } else if (student.score >= 80) {
            student.grade = "B";
        } else if (student.score >= 70) {
            student.grade = "C";
        } else {
            student.grade = "D";
        }
    }
}

void highestGrade(vector<Student>& students) {
    for (Student& student : students) {
        if (student.score >= 95) {
            student.highestTestScore = true;
        } else {
            student.highestTestScore = false;
        }
    }
}

void writeStudentsData(const vector<Student>& students) {
    ofstream outdata;

    outdata.open("/Users/mityakim/Desktop/Learn_C/9-2/Ch9_Ex2Out.txt");
    if (!outdata) {
        cerr << "Couldn't open output file" << endl;
    }

    for (const Student& student : students) {
        outdata << left << setw(7) << student.name << "  " << setw(11) <<  fixed << setprecision(2) << student.lastname << "  " << setw(8) << student.score << "  " << student.grade << endl;
    }   

    outdata << endl;
    outdata << "Highest Test Score 95" << endl;
    outdata << "Students having the highest test score:" << endl;

    for (const Student& student : students) {
        if (student.highestTestScore) {
            outdata << student.name << ", " << student.lastname << endl;
        }
    }

    outdata.close();
}