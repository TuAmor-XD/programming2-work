#include <iostream>
using namespace std;

bool isLastColAscending(int [][3], int, int);

int main()
{
    const int row = 3;
    const int col = 3;
    
    int arr1[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    cout << (isLastColAscending(arr1, row, col) ? "True" : "False") << endl;

    return 0;
}

bool isLastColAscending(int arr[][3], int row, int col)
{
    for (int i = 0; i < row - 1; i++) 
    {
        if (arr[i][col - 1] >= arr[i + 1][col - 1])
        {
            return false;
        }
    }
    return true; 
}