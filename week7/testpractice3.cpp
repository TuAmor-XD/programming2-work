#include<iostream>
using namespace std; 

const int COL = 3;
void occurence(int [][COL], int, int, int, int);

int main()
{
    const int row = 3;
    const int col = 3;
    int arr[row][col] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int old = 3, n3w = 4; 
    occurence(arr, row, col, old, n3w);
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

void occurence(int a[][COL], int rows, int cols, int oldV, int  newV)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(a[i][j] == oldV)
            {
                a[i][j] = newV;
            }
        }
    }
}