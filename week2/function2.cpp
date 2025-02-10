#include<iostream>
using namespace std;

int averageOfNumbers(int [], int);

int main()
{
    int size = 2;
    int x[size] = {8, 4};
    
    int sum = sumOfNumbers(x, size);
    cout << sum << endl;
    int average = averageOfNumbers(x, size);
    cout << average << endl;

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

int sumOfNumbers(int a[], int size)
{
    int sum = 0;

    for(int x = 0; x < size; x++)
    {
        sum += a[x];    
    }
    return sum;
}

int averageOfNumbers(int a[], int size)
{
    int average = 0;
    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    for(int i = 0; i < size; i++)
    {
        average = sum / size;
    }
    return average;

}