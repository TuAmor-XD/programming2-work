#include <iostream>
using namespace std;

void sumCols(int[][3], int, int, int[]);

int main()
{
    const int row = 3;
    const int col = 3;
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum[col] = {}; // Empty array to store column sums

    // Call function to calculate column sums
    sumCols(arr, row, col, sum);

    // Print the column sums
    cout << "Column sums: ";
    for (int i = 0; i < col; i++)
    {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}

void sumCols(int a[][3], int rows, int cols, int sum[])
{
    for (int i = 0; i < cols; i++)
    {
        sum[i] = 0;

        for (int j = 0; j < rows; j++)
        {
            sum[i] += a[j][i]; 
        }
    }
}
