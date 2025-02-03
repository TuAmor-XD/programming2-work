#include <iostream>
using namespace std;

int paymentXd(int[], int);

int main()
{
    int size = 1;
    int x[size];  

    int totalPayment = paymentXd(x, size);
    cout << "Total payment for the week: $" << totalPayment << endl;

    return 0;
}

int paymentXd(int a[], int size)
{
    int hourlyRate = 5;
    int dailyHours = 0;
    int daysWorked = 0;

    cout << "Enter hours worked for this day: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
        dailyHours = a[i];  
    }

    cout << "Enter number of days worked this week: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
        daysWorked = a[i]; 
    }

    int dailyPay = dailyHours * hourlyRate;
    int weeklyPay = dailyPay * daysWorked;

    return weeklyPay;
}
