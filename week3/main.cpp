#include<iostream>
using namespace std;

const int COLS = 3;

double sumOfElements(const double[][COLS], int row, int col);
double averageElements(const double[][COLS], int row, int col);
double findMax(const double[][COLS], int row, int col);
double findMin(const double[][COLS], int row, int col);
int countEven(const int[][COLS], int rows, int cols); 
int countOdd(const int[][COLS], int rows, int cols); 

int main()
{
    const int rows = 2; 
    const int cols = 3; 
    double arr[rows][cols] = {{1, 2, 3}, {4, 5, 6}};
    const int arr2[rows][cols] = {{1, 2, 3}, {4, 5, 6}};
    
    double result = sumOfElements(arr, rows, cols);
    cout << result;
    
    cout << endl;

    double result2 = averageElements(arr, rows, cols);
    cout << result2;

    cout << endl;

    double result3 = findMax(arr, rows, cols);
    cout << result3;
    
    cout << endl;

    double result4 = findMin(arr, rows, cols);
    cout << result4;

    cout << endl;

    int result5 = countEven(arr2, rows, cols);
    cout << result5;

    cout << endl;
    
    int result6 = countOdd(arr2, rows, cols);
    cout << result6;

    return 0;
}

double sumOfElements(const double a[][COLS], int row, int col)
{
    double sum = 0; 
    for(int i = 0; i < row; i++)
    {   
        for(int j = 0; j < col; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}

double averageElements(const double a[][COLS], int row, int col)
{
    double sum = 0;
    double average = a[0][0]; 
    for(int i = 0; i < row; i++)
    {   
        for(int j = 0; j < col; j++)
        {
            sum += a[i][j];
            average += sum / row + col;
        }
    }
    return average; 
}

double findMax(const double a[][COLS], int row, int col)
{
    double max = a[0][0];
    for(int i = 0; i < row; i++)
    {   
        for(int j = 0; j < col; j++)
        {
            if(a[i][j] > max)
            {
                max++;
            }
        }
    }
    return max;
}

double findMin(const double a[][COLS], int row, int col)
{
    double min = a[0][0];
    for(int i = 0; i < row; i++)
    {   
        for(int j = 0; j < col; j++)
        {
            if(a[i][j] < min)
            {
                min++;
            }
        }
    }
    return min;
}

int countEven(const int a[][COLS], int row, int col)
{
    int even = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(a[i][j] % 2 == 0)
            {
                even++;
            }
        }
    }
    return even;
}

int countOdd(const int a[][COLS], int row, int col)
{
    int odd = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(a[i][j] % 2 != 0)
            {
                odd++;
            }
        }
    }
    return odd;
}