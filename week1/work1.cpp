#include<iostream>
using namespace std;

void printArr(int[], int);
void printOdd(int[], int);
int locateNumber(int[], int); 

int main()
{
    int size = 5;
    int size2 = 10;
    int arr[size] = {};
    int x[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printArr(arr, size);
    printOdd(arr, size);
    locateNumber(x, size2);

    return 0;

}

void printArr(int c[], int size)
{
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < size; i++)
    {
        cin >> c[i];

    }
    
    for(int j = 0; j < size; j++)
    {
        cout << c[j] << " ";
    }

    cout << endl;
}

void printOdd(int c[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(c[i] % 2 != 0)
        {
            cout << c[i] << " ";
        }
    }
    cout << endl;
   
}

int locateNumber(int a[], int size)
{
    int num;
    cout << "*****Enter -1 to end this code*****\n";
    cout << "Enter a number to locate: ";
    cin >> num;

    if (num == -1)
    {
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        if (num == a[i])
        {
            cout << "Number was found at index: " << i << ".\n";
            return i;
        }
    }

    cout << "Oops, try again lil bro...\n";
    return 0; 
}