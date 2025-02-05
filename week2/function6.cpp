//6.	Count Even Numbers: Write a function that returns the count of even numbers in the array.
#include<iostream>
using namespace std;

void evenXd(int [], int);

int main()
{
    int size = 10;
    int sui[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    evenXd(sui, size);

    return 0;
}

void evenXd(int x[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(x[i] % 2 == 0)
        {
            cout << x[i] << " "; 
        }
        for(int j = 0; j < size; j++)
        {
            x[j] += count;
        }    
    }
    cout << endl;
    cout << "Number of even are: " << count << ".\n";
}

