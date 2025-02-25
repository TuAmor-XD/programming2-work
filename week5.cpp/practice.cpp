#include<iostream>
using namespace std;

void printDiagonal(int [][3], int);
void reverseDiagonal(int [][3], int);
void reverseSum(int [][3], int);

int main()
{
    const int row = 3;
    const int col = 3;
    int a[row][col] = {{1,2,3}, {4,5,6,},{7,8,9}};

    printDiagonal(a, col);
    cout << endl;
    reverseDiagonal(a, row);
    cout << endl;
    reverseSum(a, row);
    
    return 0;
}

void printDiagonal(int a[][3], int col)
{
    for(int i = 0; i < col; i++)
    {
        
        cout << a[i][i] << " ";
        
    }
}

void reverseDiagonal(int a[][3], int row)
{
    for(int i = row - 1; i >= 0; i--)
    {
        cout << a[i][i] << " ";   
    }
}

void reverseSum(int a[][3], int row)
{
    int sum = 0;
    for(int i = row - 1; i >= 0; i--)
    {
        sum += a[i][i];
        cout << sum << " ";   
    }
}


