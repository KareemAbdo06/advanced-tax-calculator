#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter the amount to be taxed: ";
    double amount;
    cin >> amount;

    cout << "enter the tax rate: ";
    double tax_rate;
    cin >> tax_rate;

    const double ComputerTax = tax_rate / 100; //converts to understandable computer amount
    double tax = amount * ComputerTax;
    double amount_after_tax = amount - tax;

    cout << "The Tax amount is: " << tax
         << ", and The total amount after Tax is: "
         << amount_after_tax << endl;

    return 0;
}
