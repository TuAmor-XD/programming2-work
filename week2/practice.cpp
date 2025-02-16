#include<iostream>
using namespace std;

int sumOfNumbers(int [],int);
double average(int [], int);
int countEven(int [], int);
int countOdd(int [], int);
void replace(int [], char x[], int);
int findMax(int [], int size);
int findMin(int [], int size);

int main()
{
    int size = 10;
    int xd[size] = {};
    char x[size];
    
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < size; i++)
    {
        cin >> xd[i];
    }

    int sum = sumOfNumbers(xd, size);
    cout << "Sum of numbers is: " << sum << ".\n";
    
    double averagexd = average(xd, size);
    cout << "Average of the numbers is: " << averagexd << ".\n";

    int even = countEven(xd, size);
    cout << "The total count of even numbers are: " << even << ".\n";

    int odd = countOdd(xd, size);
    cout << "The total count of odd numbers are: " << odd << ".\n";

    replace(xd, x, size);
    cout << "modified array: ";
    for(int i = 0; i < size; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;

    int max = findMax(xd, size);
    cout << "Maximum number in the array is: " << max << ".\n";

    int min = findMin(xd, size);
    cout << "Minimum number is: " << min << ".\n";

    return 0;
}

int sumOfNumbers(int a[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

double average(int a[], int size)
{
    int sum = 0;
    double average = 0;
    for(int i = 0; i < size; i++)
    {
        sum += a[i];
        average += sum / size; 
    }
    return average;
}

int countEven(int a[], int size)
{
    int count = 0;
    for(int i = 0 ; i < size; i++)
    {
        if(a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int countOdd(int a[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

void replace(int a[], char x[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        if (a[i] < 5) 
        {
            x[i] = '#'; 
        } else {
            x[i] = '0' + a[i]; 
        }
    }
}

int findMax(int a[], int size)
{
    int max = a[0];
    for(int i = 0; i < size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int findMin(int a[], int size)
{
    int min = a[0];
    for(int i = 0; i < size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}