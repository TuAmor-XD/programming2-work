#include<iostream>
using namespace std;

int paymentXd(int[], int);

int main()
{
    int size = 1;
    int x[size] = {};

    int totalPayment = paymentXd(x, size);
    cout << "Total payment for the day: $" << totalPayment << endl;

    
    return 0;
}

int paymentXd(int a[], int size)
{
    int result = 0;
    int hourly = 5;

    cout << "Enter hours worked for this day: ";
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
        result += a[i] * hourly;
    }
    return result;
}