#include<iostream>
using namespace std;

int freq(int [], int);

int main()
{
    int size = 10;
    int arr[size] = {1,2,2,4,4,8,8,8,9,1};
    int result = freq(arr, size);
    cout << result << endl;

    return 0;
}

int freq(int a[], int size)
{
    int least = a[0];
    int min = size + 1;
    for(int i = 0; i < size; i++)
    {
        int current = 0;
        for(int j = 0; j < size; j++)
        {
            if(a[i] == a[j])
            {
                current++;
            }
        }
        if(current < min)
        {
            min = current;
            least = a[i];
        }
    }
    return least;
}