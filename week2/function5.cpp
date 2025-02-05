//5.	Reverse an Array: Write a function that reverses the order of elements in the array.
#include<iostream>
using namespace std;

void reverseXd(int [], int);

int main()
{
    int size = 10;
    int xd[size] = {1,2,3,4,5,6,7,8,9,10};

    reverseXd(xd, size);

    return 0;
}

void reverseXd(int a[], int size)
{
    for(int i = size - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}