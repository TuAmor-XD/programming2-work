#include <iostream>
using namespace std;

int sumOfNumbers(const int[][3], int rows, int cols);
int sumOfRow1(const int a[][3], int rows, int cols);
int sumDiagonal(const int a[][3], int rows, int cols);
int sumOfCol3(const int a[][3], int rows, int cols);

int main() {
    const int row = 3;
    const int col = 3;
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int result = sumOfNumbers(arr, row, col);
    cout << "Sum of all numbers: " << result << endl;

    int result1 = sumOfRow1(arr, row, col);
    cout << "Sum of the first row: " << result1 << endl;

    int result2 = sumDiagonal(arr, row, col);
    cout << "Sum of diagonal values: " << result2 << endl;

    int result3 = sumOfCol3(arr, row, col);
    cout << result3 << endl;

    return 0;
}

int sumOfNumbers(const int a[][3], int rows, int cols) 
{
    int sum = 0;
    for (int row = 0; row < rows; row++) 
    {
        for (int col = 0; col < cols; col++) 
        {
            sum += a[row][col];
        }
    }
    return sum;
}

int sumOfRow1(const int a[][3], int rows, int cols) 
{
    int sum = 0;
    for (int col = 0; col < cols; col++) 
    {
        sum += a[0][col];
    }
    return sum; 
}

int sumDiagonal(const int a[][3], int rows, int cols) 
{
    int sum = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (i == j) 
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}

int sumOfCol3(const int a[][3], int rows, int cols)
{
    int sum = 0;
    for(int row = 0; row < rows; row++)
    {
        sum += a[row][2];
    }
    return sum;
}
