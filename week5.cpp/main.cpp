#include<iostream>
using namespace std;


int sumOfColumns(const int [][3], int, int);

int main()
{
    const int rows = 5;
    const int cols = 3;
    const int arr[rows][cols] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{}};

    int result = sumOfColumns(arr, rows, cols);
    cout << result << endl;

    return 0;
}

int sumOfColumns(const int a[][3], int row, int col)
{
    int sum = 0;
    const int rows = 0;
    const int cols = 0;
    for(int rows = 0; rows < row - 1; rows++)
    {
        for(int cols = 0; cols < col; cols++)
        {
            sum += a[rows][cols];
        }
    }
    return 0;
}