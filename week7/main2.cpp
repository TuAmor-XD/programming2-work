#include<iostream>
using namespace std;

int isAscendingRowWise(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (arr[i][j - 1] > arr[i][j])
                return 0; 
        }
    }
}

int main()
{
    const int rows = 3;
    const int cols = 3;
    int a[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    if (isAscendingRowWise(a, rows, cols))
        cout << "The array is in row-wise ascending order." << endl;
    else
        cout << "The array is NOT in row-wise ascending order." << endl;

    return 0;
}