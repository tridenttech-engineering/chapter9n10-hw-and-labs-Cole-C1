//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype
double getPayment(int, double, int);
double precision(double,int);
int main()
{
    //declare variables
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;

    cout << "Car price (after any trade-in): ";
    cin >> carPrice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;

    //check if monthly entered data is 0, if 0, exit program with a return of -1
    
   
        
    //call function to calculate payments

    creditPayment = getPayment(carPrice - rebate,
        creditRate / 12, term * 12);
    dealerPayment = getPayment(carPrice, 
        dealerRate / 12, term * 12);    //assign values to calculate payments
    double totalcreditpayment = precision(creditPayment,2) * (term*12);
    double totaldealerpayment = precision(dealerPayment,2) * (term*12);
  
   
    
    //display payments
    cout << fixed << setprecision(2) << endl; 
    cout << "Credit union payment: $" << creditPayment << endl;
    std::cout << "Total credit union payment: $" << totalcreditpayment << endl;
    cout << "Dealer payment: $" << dealerPayment << endl;    
    std::cout << "Total dealer payment: $" << totaldealerpayment << endl;
    
   
    return 0;
    
}//end of main function    

    //*****function definitions*****
double getPayment(int prin,
                  double monthRate, 
                  int months)
{
    //calculates and returns a monthly payment
    double monthPay = 0.0;
    monthPay = prin * monthRate / 
        (1 - pow(monthRate + 1, -months));
    return monthPay;

} 

double precision( double input, int places )
{
    double rounding_modifier = std::pow(10.0f, places ) ;
    return std::round(input * rounding_modifier) / rounding_modifier;
}
