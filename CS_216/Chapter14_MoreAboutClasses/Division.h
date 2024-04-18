#ifndef DIVISION_H
#define DIVISION_H

const int QUATERS_NUM = 4;

class Division {
    private:
        static double totalCorporateSales;
        double quatersDivisionSales[QUATERS_NUM];

    public:
        void setQuatersDivisionSales(double firstQuater, double secondQuater, double thirdQuater, double fouthQuater) {
            quatersDivisionSales[0] = firstQuater;
            quatersDivisionSales[1] = secondQuater;
            quatersDivisionSales[2] = thirdQuater;
            quatersDivisionSales[3] = fouthQuater;

            double divisionTotal = firstQuater + secondQuater + thirdQuater + fouthQuater;
            totalCorporateSales += divisionTotal;
        };

        double getQuaterDivisionSale(int index) {
            return quatersDivisionSales[index];
        };

        double getTotal() const {
            return totalCorporateSales;
        }
};

double Division::totalCorporateSales = 0.0;

#endif