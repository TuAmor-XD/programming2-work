#include<iostream>
using namespace std;

int sumOfNumbers(int [], int);

int main()
{
    int size = 2;
    int x[size] = {};
    int num;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter 2 numbers: ";
        cin >> num[i];
    }
    
    int result = sumOfNumbers(x, size);
    cout << result << endl;

    return 0;
}

int sumOfNumbers(int a[], int size)
{
    int sum = 0;

    for(int x = 0; x < size; x++)
    {
        sum += a[x];    
    }
    return sum;
}
