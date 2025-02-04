#include<iostream>
using namespace std;

void sumOfNumbers(int [], int);

int main()
{
    int size = 2;
    int x[size] = {};
    
    sumOfNumbers(x, size);

    return 0;
}

void sumOfNumbers(int a[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter 2 numbers: ";
        cin >> a[i];
    }

    for(int j = 0; j < size; j++)
    {
        cout << "You have enterned: " << a[j] << " ";
    }

    cout << endl;

    for(int x = 0; x < size; x++)
    {
        sum += a[x];    
    }

    cout << "Sum of all numbers are: " << sum << ".\n";
}