// #include <iostream>
// using namespace std;

// void doublenumber(int *, int *);
// void printArray(int *, int );

// int main()
// {
//     int num1, num2;
//     cout << "Enter two numbers";
//     cin >> num1 >> num2;
    
//     int *num1ptr = &num1;
//     int *num2ptr = &num2;
//     doublenumber(num1ptr, num2ptr);
    
//     cout << "Number 1 has been updated to "  << num1;
//     cout << "\nNumber 2 has been updated to "  << num2;
    
//     const int size = 10;
//     int array1[size] = {2,3,4,5,6,7};
//     printArray(array1, size);
    
//     return 0;
// }

// void doublenumber(int *var1, int *var2)
// {
//     *var1 += 2;
//      *var2 += 2;
// }

// void printArray(int *aptr, int size) 
// {
//     cout << endl;
//     for (int i = 0 ; i < size; ++i)
//     {
//        cout << *(aptr +i);
//     }

// }


#include <iostream>
#include <cstring>
using namespace std;

void insert(char *);

int main()
{
    char input[] = "a fun sentence this is";
    char *tokenptr = strtok(input, " ");

    while (tokenptr != nullptr)
    {
        cout << tokenptr << " ";
        insert(tokenptr);
        cout << tokenptr << endl;
        tokenptr = strtok(nullptr, " ");
    }

    return 0;
}

void insert(char *tokenptr)
{
    while (*tokenptr != '\0')
    {
        if (*tokenptr == 'a' || *tokenptr == 'e' || *tokenptr == 'i' || *tokenptr == 'o' || *tokenptr == 'u')
        {
            *tokenptr = '$';
        }
        tokenptr++;
    }
}
