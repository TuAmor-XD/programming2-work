#include<iostream>
using namespace std;

int main()
{
    int arraysize = 5;
    int fractions[arraysize] = {1,2,3,4,5};
    int small = fractions[0];
    int index = 0;

    for(int i = 0; i < arraysize; i++)
    {
        if(fractions[i] < small)
        {
            small = fractions[i];
            index = i;
        }
    }

    cout << "smallest num is: " << small << endl;
    cout << "its located at array: " << index << endl;

    for(int i = 0; i < arraysize; i++)
    {
        if(fractions[i] % 2 != 0)
        {
            cout << fractions[i] << " ";
        }
    }
    return 0; 
}