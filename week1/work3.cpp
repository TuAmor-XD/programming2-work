#include<iostream>
using namespace std;

int numberEvenNumbers(int[], int);
int addEvenNumbers(int[], int);

int main()
{
    int size = 10;
    int x[size] = {};

    cout << "Enter 10 numbers: \n";

    for(int i = 0; i < size; i++)
    {
        cin >> x[i];
    }

    cout << endl;

    for(int j = 0; j < size; j++)
    {
        cout << x[j] << " ";
    }

    cout << endl;

    for(int o = size - 1; o >= 0; o--)
    {
        cout << x[o] << " ";
    }

    cout << endl;
    int sum = 0;
    
    for(int p = 0; p < size; p++)
    {
        sum += x[p];
    }

    cout << "Your total sum of the numbers is: " << sum << ".\n";

    for(int q = 0; q < size; q++)
    {
        if(q % 2 != 0)
        {   
            cout << x[q] << " "; //
        }
    }

    numberEvenNumbers(x, size);


    return 0;
}

int numberEvenNumbers(int b[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(b[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}