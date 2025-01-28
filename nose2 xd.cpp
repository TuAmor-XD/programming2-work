#include<iostream>
using namespace std;

void multiplynumber(int[], int);
void printReverse(int[], int);

int main()
{
    int arrsize = 5;
    int a[arrsize] = {2,4,6,8,10};
    multiplynumber(a, arrsize);
    cout << endl;
    printReverse(a, arrsize);
    return 0;
}

void printReverse(int f[], int size)
{
    for(int i = size - 1; i >= 0; i--)
    {
        cout << f[i] << " ";
    }
}

// multiply each by 2

void multiplynumber(int b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        b[i] = b[i] * 2;
        cout << b[i] << " ";
    }
}