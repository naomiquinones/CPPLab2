#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double TAX_RATE = 0.075;
    double price;

    cout << "Enter the price ";
    cin >> price;

    double tax = price * TAX_RATE;
    double total = price + tax;

    cout << fixed << setprecision(2) << endl;
    cout << setw(18) << "Original Price: " << "$" << setw(8) << right << price << endl;
    cout << setw(18) << "Sales Tax: " << "$" << setw(8) << right << tax << endl;
    cout << setw(18) << "Total Cost: " << "$" << setw(8) << right << total << endl;

    return 0;
}