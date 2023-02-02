#include <iostream>
using namespace std;

int main()
{
    int fixedH = 40;
    int factor = 2;
    int weeklySalary = 0;

    int NH;
    int HW;

    cout << "Please enter your number of hours.\n";
    cin >> NH;
    cout << "Please enter your hourly wage.\n";
    cin >> HW;

    weeklySalary = fixedH * HW;

    if (NH > fixedH)
    {
        weeklySalary += (NH - fixedH) * HW * 2;
    }
    
    int choice;

    cout << "Number of hours: " << NH << "\nHere is your weekly salary: " << weeklySalary << "\nTo continue press 1. To exit press any other number.";
    cin >> choice;

    int totalTax;
    int annualSalary;
    float rate;
    if (choice == 1)
    {
        totalTax = 0;
        annualSalary = weeklySalary * 52;
        if (annualSalary <= 20000)
        {
            rate = 0.19;
            totalTax = annualSalary * 0.19;
        }
        else {
            totalTax = 20000 * 0.19;
            if (annualSalary < 30000)
            {
                rate = 0.21;
                totalTax += (annualSalary - 20000) * 0.21;
            }
            else {
                rate = 0.28;
                totalTax += 10000 * 0.21 + (annualSalary - 30000) * 0.28;
            }
        }
    }

    cout << "Annual earnings: " << annualSalary << "\nTax rate: " << rate << "\nCalculated tax: " << totalTax << "\nWages without tax: " << annualSalary - totalTax;
    return 0;
}
