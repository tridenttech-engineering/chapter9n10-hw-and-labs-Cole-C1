//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getpayment(int, double, int);

int main()
{
int carprice = 0;
int rebate = 0;
double creditrate = 0.0;
double dealerrate = 0.0;
int term = 0;
double creditpayment = 0.0;
double dealerpayment = 0.0;

    std::cout << "Car price";
    std::cin >> carprice;
    std::cout << "Rebate";
    std::cin >> rebate;
    std::cout << "Credit union rate";
    std::cin >> creditrate;
    std::cout << "Dealer rate";
    std::cin >> dealerrate;
    std::cout << "Term in years";
    std::cin >> term;

    //calculations
    creditpayment = getpayment(carprice - rebate, creditrate/12, term*12);
    dealerpayment = getpayment(carprice, dealerrate/12, term*12);
    std::cout << "credit union payment: $" << creditpayment << std::endl;
    std::cout << "dealer payment: $" << dealerpayment << std::endl;
    //display payments
    std::cout << fixed << setprecision(2) << endl;
    std::cout << "credit union payment: $" << creditpayment << endl;
    std::cout << "dealer payment: $" << dealerpayment << endl;
   
    return 0;
}//end of main function    
double getpayment(int prin, double monthrate, int months) {
    double monthpay = 0.0;
    monthpay = prin * monthrate / (1 - pow(monthrate + 1, -months));
    return monthpay;
}