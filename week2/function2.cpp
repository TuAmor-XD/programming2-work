#include<iostream>
using namespace std;

void averageOfNumbers(int [], int);

int main()
{
    int size = 2;
    int x[size] = {};
    
    averageOfNumbers(x, size);

    return 0;
}

void averageOfNumbers(int a[], int size)
{
    int sum = 0;
    int average = 0;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter 2 numbers: ";
        cin >> a[i];
    }

    for(int j = 0; j < size; j++)
    {
        cout << "You have enterned: " << a[j] << " ";
    }

    cout << endl;

    for(int x = 0; x < size; x++)
    {
        sum += a[x];    
    }
    cout << endl;
    cout << "Sum of all numbers are: " << sum << ".\n";


    int choice;
    cout << "You you like to find the average? \n";
    cout << "*****Enter 1 for yes and -1 for no****\n";
    cin >> choice; 

        if(choice == 1)
        {
            average = sum / size;
            cout << "The average is: " << average << ".\n";
            
        }else if(choice == -1)
        {
            cout << "Well byeeeee :v \n";
        }
        

    

}