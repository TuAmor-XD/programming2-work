#include<iostream>
using namespace std;

void sumRows(int [][3], int, int, int []);

int main()
{
    const int row = 3;
    const int col = 3;
    int a[row][col] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int sum[row] = {};

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    sumRows(a, row, col, sum);
    for(int i = 0; i < row; i++)
    {
        cout << sum[i] << " "; 
    }

}

void sumRows(int arr[][3], int row, int col, int sum[])
{
    
    for(int i = 0; i < row; i++)
    {
        sum[i] = 0;
        for(int j = 0; j < col; j++)
        {
            sum[i] += arr[i][j];
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            arr[i][j] = sum[i];
            sum[i] = arr[i][j];
        }
    }
}