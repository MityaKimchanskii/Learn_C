#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

const int NUM_PLAYERS = 10;

struct Player
{
    string name;
    string billPosition;
    int touchDowns;
    int numberOfCatches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};

void readData(vector<Player> &players);
void printMenu();
void printPlayer(string name, const vector<Player> &players);
void printFullData(const vector<Player> &players);
Player findPlayer(string name, const vector<Player> &players);
void updateTouchDowns(string name, int newTouchDownsData, const vector<Player> &players);
void updateNumberOfCatches(string name, int newNumberOfCatches, const vector<Player> &players);
void updatePassingYards(string name, int newPassingYards, const vector<Player> &players);
void updateReceivingYards(string name, int newReceivingYards, const vector<Player> &players);
void updateRushingYards(string name, int newRushingYards, const vector<Player> &players);
void saveNewData(const vector<Player> &players);

int main()
{
    int number = 0;
    int numberToAdd = 0;
    string playerName;
    string answer;
    vector<Player> players;

    // read the data from the file
    readData(players);

    
    while (number != 99)
    {
        printMenu();
        cin >> number;
        cout << endl;

        if (number == 1)
        {
            cout << "Enter players name: ";
            cin >> playerName;
            cout << endl;
            printPlayer(playerName, players);
        }
        else if (number == 2)
        {
            printFullData(players);
        }
        else if (number == 3)
        {
            cout << "Enter players name to update touch downs: ";
            cin >> playerName;
            cout << endl;

            cout << "Enter number to update touch downs: ";
            cin >> numberToAdd;
            cout << endl;

            updateTouchDowns(playerName, numberToAdd, players);
        }
        else if (number == 4)
        {
            cout << "Enter players name to update number of cathces: ";
            cin >> playerName;
            cout << endl;
        }
        else if (number == 5)
        {
            cout << "Enter players name to update passing yards: ";
            cin >> playerName;
            cout << endl;
        }
        else if (number == 6)
        {
            cout << "Enter players name to update reciving yards: ";
            cin >> playerName;
            cout << endl;
        }
        else if (number == 7)
        {
            cout << "Enter players name to update running yards: ";
            cin >> playerName;
            cout << endl;
        }
    }


    if (number == 99)
    {
        if (numberToAdd > 0)
        {
            cout << "Do you want to save the new data in a new file? (Y/N)";
            cin >> answer;
            cout << endl;

            if (answer == "Y")
            {
                saveNewData(players);
                cout << "New data saved successfully!" << endl;
            }
        }
    }

    return 0;
}

void readData(vector<Player> &players)
{
    ifstream datafile("/Users/mityakim/Desktop/Learn_C/9-7/Ch9_Ex7Data.txt");

    if (!datafile)
    {
        cerr << "Error: Couldn't open data file" << endl;
        exit(1);
    }

    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        Player player;
        datafile >> player.name >> player.billPosition >> player.touchDowns >> player.numberOfCatches >> player.passingYards >> player.receivingYards >> player.rushingYards;

        players.push_back(player);
    }

    datafile.close();
}

void printMenu()
{
    cout << "Select one of the following options:" << endl;
    cout << "1: To print a player's data" << endl;
    cout << "2: To print the entire data" << endl;
    cout << "3: To update a player's touch downs" << endl;
    cout << "4: To update a player's number of catches" << endl;
    cout << "5: To update a player's passing yards" << endl;
    cout << "6: To update a player's receiving yards" << endl;
    cout << "7: To update a player's rushing yards" << endl;
    cout << "99: To quit the program" << endl;
}

void printFullData(const vector<Player> &players)
{
    cout << "Name      BillPosition   TD   NOC  PYa    ReY    RuY" << endl;
    for (const Player &player : players)
    {
        cout << left << setw(8) << player.name << "  " << setw(13) << player.billPosition << "  " << setw(3) << player.touchDowns << "  "
             << setw(3) << player.numberOfCatches << "  " << setw(5) << player.passingYards << "  " << setw(5) << player.receivingYards << "  "
             << setw(6) << player.rushingYards << endl;
    }
    cout << endl;
}

Player findPlayer(string name, const vector<Player> &players)
{
    Player playerToPass;
    int count = 0;

    for (const Player &player : players)
    {
        if (player.name == name)
        {
            playerToPass = player;
            
            cout << "Index of playerToPass: " << count;
            cout << endl;
        }
        count += 1;
    }

    return playerToPass;
}

void printPlayer(string name, const vector<Player> &players)
{
    Player player = findPlayer(name, players);

    cout << "Name      BillPosition   TD   NOC  PYa    ReY    RuY" << endl;
    cout << left << setw(8) << player.name << "  " << setw(13) << player.billPosition << "  " << setw(3) << player.touchDowns << "  "
         << setw(3) << player.numberOfCatches << "  " << setw(5) << player.passingYards << "  " << setw(5) << player.receivingYards << "  "
         << setw(6) << player.rushingYards << endl;
    cout << endl;
}

void updateTouchDowns(string name, int newTouchDownsData, const vector<Player> &players)
{
    Player playerToUpdate = findPlayer(name, players);
    playerToUpdate.touchDowns = playerToUpdate.touchDowns + newTouchDownsData;

    cout << "Touch downs updated sucessfully!" << endl;
    cout << "Name      BillPosition   TD   NOC  PYa    ReY    RuY" << endl;
    cout << left << setw(8) << playerToUpdate.name << "  " << setw(13) << playerToUpdate.billPosition << "  " << setw(3) << playerToUpdate.touchDowns << "  "
         << setw(3) << playerToUpdate.numberOfCatches << "  " << setw(5) << playerToUpdate.passingYards << "  " << setw(5) << playerToUpdate.receivingYards << "  "
         << setw(6) << playerToUpdate.rushingYards << endl;
    cout << endl;
}

void updateNumberOfCatches(string name, int newNumberOfCatches, const vector<Player> &players)
{
    Player playerToUpdate = findPlayer(name, players);
    playerToUpdate.numberOfCatches = playerToUpdate.numberOfCatches + newNumberOfCatches;
}

void updatePassingYards(string name, int newPassingYards, const vector<Player> &players)
{
    Player playerToUpdate = findPlayer(name, players);
    playerToUpdate.passingYards = playerToUpdate.passingYards + newPassingYards;
}

void updateReceivingYards(string name, int newReceivingYards, const vector<Player> &players)
{
    Player playerToUpdate = findPlayer(name, players);
    playerToUpdate.receivingYards = playerToUpdate.receivingYards + newReceivingYards;
}

void updateRushingYards(string name, int newRushingYards, const vector<Player> &players)
{
    Player playerToUpdate = findPlayer(name, players);
    playerToUpdate.rushingYards = playerToUpdate.rushingYards + newRushingYards;
}

void saveNewData(const vector<Player> &players)
{
    ofstream outdata;

    outdata.open("/Users/mityakim/Desktop/Learn_C/9-7/Ch9_Ex7Out.txt");
    if (!outdata)
    {
        cerr << "Couldn't open output file" << endl;
    }

    outdata << "Name      BillPosition   TD   NOC  PYa    ReY    RuY" << endl;
    for (const Player &player : players)
    {
        outdata << left << setw(8) << player.name << "  " << setw(13) << player.billPosition << "  " << setw(3) << player.touchDowns << "  "
                << setw(3) << player.numberOfCatches << "  " << setw(5) << player.passingYards << "  " << setw(5) << player.receivingYards << "  "
                << setw(6) << player.rushingYards << endl;
    }

    outdata.close();
}