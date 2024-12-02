//Lab10-2.cpp - displays total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;


// prototype functions
    void displayoptions();
    void getregular(int windows, double price, double &total);
    void getBoGo(int windows, double price, double &total);

    int main() {
    int option = 0;
    int windows_ordered = 0;
    double window_price = 0.0;
    double total = 0.0;

        cout<<fixed<<setprecision(2);
        displayoptions();
        cout << "Pricing option? ";
        cin >> option;

        if (option == 1 || option == 2)
        {
            cout << "Number of windows: ";
            cin >> windows_ordered;
            cout << "Price per window: ";
            cin >> window_price;
            if (option == 1)
                getregular(windows_ordered, window_price, total);
            else
        getBoGo(windows_ordered,window_price, total);
            cout << "Total price owed: $" << total << endl;
    cout << "Total owed: $" << total << endl;
            
        }
    else
            cout << "Invalid option" << endl;
    return 0;
} //end of main function
 void displayoptions() {
     cout << "Pricing options:" << endl;
     cout << "1 Regular pricing" << endl;
     cout << "2 BoGo pricing" << endl;
 }
 void getregular(int windows, double price, double &total) {
     total = windows * price;
 }
 void getBoGo(int windows, double price, double &total) {
     total = (windows / 2 + windows % 2) * price ;
 }