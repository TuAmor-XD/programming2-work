#include<iostream>
using namespace std;

int sumOfAll(const int [][3], int, int);

int main()
{
    const int rows = 3;
    const int cols = 3;
    const int xd[rows][cols] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int result = sumOfAll(xd, rows, cols);
    cout << result << endl;

    return 0;
}

int sumOfAll(const int a[][3], int row, int col)
{
    int sum = 0; 
    for(int rows = 0; rows < row; rows++)
    {
        for(int cols = 0; cols < col; cols++)
        {
            sum += a[rows][cols];
        }
    }
    return sum;
}