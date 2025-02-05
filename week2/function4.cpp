//4.	Find Minimum: Write a function that returns the smallest element in the array.
#include<iostream>
using namespace std;

int smallestNum(int [], int);

int main()
{
    int size = 10;
    int xd[size] = {};
    
    int result = smallestNum(xd, size);
    cout << "The smallest number that user entered was: " << result << ".\n";

    return 0;
}

int smallestNum(int a[], int size)
{
    int smol;
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
        if(a[i] < smol)
        {
            smol = a[i];
        }
    }
    return smol;
}