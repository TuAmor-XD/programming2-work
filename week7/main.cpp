#include<iostream>
using namespace std;

const int COL = 3;
void arrSwap(int [][COL], int[][COL], int);

int main()
{
    const int row = 3;
    const int col = 3;
    int arr[row][col] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int arr1[row][col] = {};
    
    arrSwap(arr, arr1, row);
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void arrSwap(int a[][COL], int a1[][COL], int row)
{
    int temp = a[0][0];
    a[0][0] = a[0][2];
    a[0][2] = temp;
    
    for(int i = 0; i < row; i++)
    {
        a1[row - 1][i] = a[0][i];
    }
}

