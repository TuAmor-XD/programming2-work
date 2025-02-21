#include <iostream>
using namespace std;

const int COL = 3;
int sumOfColumns(int [][COL], int, int); 

int main()
{
    const int rows = 5;
    const int cols = 3;
    int arr[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {0, 0, 0}}; 

    sumOfColumns(arr, rows, cols);

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}

int sumOfColumns(int a[][COL], int row, int col)
{
    int firstColumnSum = 0;
    for(int c = 0; c < col; c++)
    {
        int sum = 0;
        for(int r = 0; r < row; r++)
        {
            sum += a[r][c];
            if(c == 0)
            {
                firstColumnSum += a[r][c];
            }
        }
        a[row - 1][c] = sum;
    }
    return firstColumnSum;
}