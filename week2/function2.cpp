#include<iostream>
using namespace std;

int averageOfNumbers(int [], int);

int main()
{
    int size = 2;
    int x[size] = {8, 4};
    
    int return = averageOfNumbers(x, size);
    cout << return;

    return 0;
}

int averageOfNumbers(int a[], int size)
{

    int average = 0;
    for(int i = 0; i < size; i++)
    {
        average /= a[i];
    }
        return average;

}