#include<iostream>
using namespace std;

void calculator(int[], int);
void orderOfOp(int[]);

int main()
{
    int size = 2;
    int arr[size] = {};
    
   
    calculator(arr, size);
    orderOfOp(arr);

    return 0;
}

void calculator(int a[], int size)
{
    cout << "Enter 2 numbers: ";
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "You have entered these numbers below.\n";
    for(int j = 0; j < size; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;
}

void orderOfOp(int b[])
{
    int result;
    char op;

    cout << "What would you like to do with these 2 numbers?" << endl;
    cout << "Input 'x' = multiply\n";
    cout << "Input '-' = subtract\n";
    cout << "Input '+' = add\n";
    cout << "Input '/' = divide\n";
    cin >> op;

        if(op == 'x')
        {
            result = b[0] * b[1]; 
            cout << "Answer is: " << result << endl;

        }else if(op == '-')
        {
            result = b[0] - b[1];
            cout << "Answer is: " << result << endl;

        }else if(op == '+')
        {
            result = b[0] + b[1];
            cout << "Answer is: " << result << endl;

        }else if(op == '/')
        {
            result  = b[0] / b[1];
            cout << "Answer is: " << result << endl;
        }
}
