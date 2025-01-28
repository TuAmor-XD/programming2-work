#include<iostream>
using namespace std;

void multipleNumbers(int); 

int main()
{
    int a = 5;
    multipleNumbers(a);
    cout << a;
    return 0;

}

void multipleNumbers(int num1)
{
    num1 = num1 * 2;
    cout << num1 << " ";
}