#include<iostream>
using namespace std;

int sumOfNumbers(int [], int);
double averageOfNumbers(int [], int);
int maxXd(int [], int);
int smallestNum(int [], int);
void reverseXd(int [], int);
void evenXd(int [], int);
void oddXd(int [], int);
int countEvenNumbers(int [], int); // New function to count even numbers
int countOddNumbers(int [], int);  // New function to count odd numbers

int main()
{
    int size = 10;
    int x[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int result = maxXd(x, size);
    cout << "The maximum number in the array is " << result << ".\n";

    double avg = averageOfNumbers(x, size);
    cout << "The average of the numbers in the array is " << avg << ".\n";

    int evenCount = countEvenNumbers(x, size);
    int oddCount = countOddNumbers(x, size);
    cout << "There are " << evenCount << " even numbers and " << oddCount << " odd numbers in the array.\n";

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

double averageOfNumbers(int a[], int size)
{
    int sum = sumOfNumbers(a, size);
    return static_cast<double>(sum) / size;
}

int maxXd(int a[], int size)
{
    int max = a[0];
    for(int i = 1; i < size; i++)   
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int smallestNum(int a[], int size)
{
    int min = a[0];
    for(int i = 1; i < size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

void reverseXd(int a[], int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
}

void evenXd(int a[], int size)
{
    cout << "Even numbers in the array: ";
    for(int i = 0; i < size; i++)
    {
        if(a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

void oddXd(int a[], int size)
{
    cout << "Odd numbers in the array: ";
    for(int i = 0; i < size; i++)
    {
        if(a[i] % 2 != 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int countEvenNumbers(int a[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int countOddNumbers(int a[], int size)
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