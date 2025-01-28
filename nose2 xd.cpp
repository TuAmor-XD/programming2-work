#include<iostream>
using namespace std;

void multiplynumber(int[], int);

int main()
{
    int arrsize = 5;
    int a[arrsize] = {2,4,6,8,10};
    multiplynumber(a, arrsize);
    return 0;
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