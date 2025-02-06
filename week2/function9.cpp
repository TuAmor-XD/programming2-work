//9.	Replace Element: Write a function that replaces all occurrences of a given value with another value.
#include<iostream>
using namespace std;

int replace(int [], int, int);

int main()
{
    int size = 10; 
    int xd[size] = {2,4,6,8,10,12,14,16,18,20};

    int result = replace(xd, size, '404');
    cout << result;

    return 0;
}

int replace(int a[], int size, int rep)
{
        int result;
        int replace = 0;
        for(int i = 0; i < size; i++)
        {
            if(a[i] == 4 * 2)
            {
                a[i] == replace;
            }
        }
        return result; 
}