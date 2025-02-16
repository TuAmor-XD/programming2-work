#include<iostream>
using namespace std;

// Function prototypes
int sumOfNumbers(int [], int);
double averageOfNumbers(int [], int);
int maxXd(int [], int);
int smallestNum(int [], int);
void reverseXd(int [], int);
int countEvenNumbers(int [], int);
int countOddNumbers(int [], int);
void replaceElement(int [], int, int, int);
void sortAscending(int [], int);
void sortDescending(int [], int);
bool isSortedAscending(int [], int);
void removeDuplicates(int [], int &); 
void rotateLeft(int [], int); 
void rotateRight(int [], int); 

int main()
{
    int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Original array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    replaceElement(arr, size, 5, 50);
    cout << "Array after replacing 5 with 50: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    sortAscending(arr, size);
    cout << "Array sorted in ascending order: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort array in descending order
    sortDescending(arr, size);
    cout << "Array sorted in descending order: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (isSortedAscending(arr, size))
    {
        cout << "The array is sorted in ascending order." << endl;
    }
    else
    {
        cout << "The array is NOT sorted in ascending order." << endl;
    }

    int arrWithDuplicates[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int newSize = 10;
    removeDuplicates(arrWithDuplicates, newSize);
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newSize; i++)
    {
        cout << arrWithDuplicates[i] << " ";
    }
    cout << endl;

    rotateLeft(arr, size);
    cout << "Array after rotating left: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotateRight(arr, size);
    cout << "Array after rotating right: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

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
    int sum = 0;
    int average = 0;
    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    average += sum / size;
    return average;
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

void replaceElement(int a[], int size, int oldValue, int newValue)
{
    for(int i = 0; i < size; i++)
    {
        if(a[i] == oldValue)
        {
            a[i] = newValue;
        }
    }
}

void sortAscending(int a[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int a[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(a[j] < a[j + 1])
            {
                // Swap elements
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

bool isSortedAscending(int a[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}

void removeDuplicates(int a[], int &size)
{
    if (size == 0) return;

    int newSize = 1; 
    for(int i = 1; i < size; i++)
    {
        bool isDuplicate = false;
        for(int j = 0; j < newSize; j++)
        {
            if(a[i] == a[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            a[newSize] = a[i];
            newSize++;
        }
    }
    size = newSize;
}

void rotateLeft(int a[], int size)
{
    if (size <= 1) return;

    int firstElement = a[0];
    for(int i = 0; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[size - 1] = firstElement;
}

void rotateRight(int a[], int size)
{
    if (size <= 1) return;

    int lastElement = a[size - 1];
    for(int i = size - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = lastElement;
}