//7.	Count Odd Numbers: Modify the previous function to count odd numbers.
#include<iostream>
using namespace std;

void oddXd(int [], int);

int main()
{
    int size = 10;
    int sui[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    oddXd(sui, size);

    return 0;
}

void oddXd(int x[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(x[i] % 2 == 1)
        {
            cout << x[i] << " "; 
        }
        for(int j = 0; j < size; j++)
        {
            count = x[j];
        }    
    }
    cout << endl;
    cout << "Number of odds are: " << count << ".\n";
}

