#include <iostream>
using namespace std;

void displayArray(int arr[], int size);

int main() 
{
    int SIZE = 10;
    int array1[SIZE];
    int array2[SIZE] = {0};
    int array2Size = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < SIZE; i++) 
    {
        cin >> array1[i];
    }

    cout << "Initial array: ";
    displayArray(array1, SIZE);

    int indexToDelete;
    cout << "Enter the index to delete (0-9): ";
    cin >> indexToDelete;

    if (indexToDelete < 0 || indexToDelete >= SIZE) 
    {
        cout << "Invalid index! Exiting program." << endl;
        return 1;
    }

    array2[array2Size++] = array1[indexToDelete];

    for (int i = indexToDelete; i < SIZE - 1; i++) 
    {
        array1[i] = array1[i + 1];
    }
    array1[SIZE - 1] = 0;

    cout << "Updated array1: ";
    displayArray(array1, SIZE - 1);

    cout << "Deleted element stored in array2: ";
    displayArray(array2, array2Size);

    char choice;
    cout << "Would you like to delete another index or merge? (d/m): ";
    cin >> choice;

    if (choice == 'd' || choice == 'D') 
    {
        cout << "Enter the index to delete (0-8): ";
        cin >> indexToDelete;

        if (indexToDelete < 0 || indexToDelete >= SIZE - 1) 
        {
            cout << "Invalid index! Exiting program." << endl;
            return 1;
        }

        array2[array2Size++] = array1[indexToDelete];

        for (int i = indexToDelete; i < SIZE - 2; i++) 
        {
            array1[i] = array1[i + 1];
        }
        array1[SIZE - 2] = 0;

        cout << "Updated array1: ";
        displayArray(array1, SIZE - 2);

        cout << "Deleted elements stored in array2: ";
        displayArray(array2, array2Size);
    } else if (choice == 'm' || choice == 'M') 
    {
        int mergedArray[SIZE + array2Size];
        int mergedSize = 0;

        for (int i = 0; i < SIZE - 1; i++) 
        {
            mergedArray[mergedSize++] = array1[i];
        }

        for (int i = 0; i < array2Size; i++) 
        {
            mergedArray[mergedSize++] = array2[i];
        }

        cout << "Merged array: ";
        displayArray(mergedArray, mergedSize);
    } else 
    {
        cout << "Invalid choice! Exiting program." << endl;
    }

    return 0;
}

void displayArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}