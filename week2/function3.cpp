#include<iostream>
using namespace std;

int sumOfNumbers(int [], int);
int maxXd(int [], int);
int averageOfNumbers(int [], int);
int smallestNum(int [], int);
void reverseXd(int [], int);
void evenXd(int [], int);
void oddXd(int [], int);

int main()
{
    int size = 10;
    int x[size] = {1,2,3,4,5,6,7,8,9,10};
    
    int result = maxXd(x, size);
    cout << "The maximum number in the array is " << result << ".\n";

    return 0;
}

int maxXd(int a[], int size)
{
    int max = 0;
    for(int i = 0; i < size; i++)   
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
