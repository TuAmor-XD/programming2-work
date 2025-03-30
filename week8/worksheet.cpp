#include<iostream>
using namespace std;

//write a function void printValue(int x) that accepts an integer and prints the value;
void printValue(int x);
//write a function double square(double num) that accepts a double and retuns its sqaure:
double square(double num);
//write a function void incrementByRef(int &x) that increments the value of x by 1 using a reference.
void incrementByRef(int &x);
//Write a function void swapValues(int &a, int &b) that swaps the values of two integers using references
void swapValues(int &a, int &b);
//Write a function void negateFlag(bool &flag) that negates the value of a boolean flag using a reference.
void negateFlag(bool &flag);
//Write a function void incrementByPtr(int *x) that increments the value of x by 1 using apointer.
void incrementByPtr(int *x);
//Write a function void multiplyByTwo(double *num) that multiplies the value of num by 2 using a pointer
void multiplyByTwo(double *num);
//Write a function void swapValuesPtr(int *a, int *b) that swaps the values of two integers using pointers.
void swapValues(int *a, int *b);
//Write a function void nullifyPointer(int *ptr) that sets the value pointed to by ptr to 0
void nullifyPointer(int *ptr);
// Write a function void dereferenceAndSet(int *ptr, int value) 
//that sets the value pointedto by ptr to the given value.
void dereferenceAndSet(int *ptr, int value);

int main()
{
    int num1 = 42;
    printValue(num1);

    double num2 = 5;
    double result = square(num2);
    cout << "Square of " << num2 << " is " << result << endl;

    int num = 3;
    incrementByRef(num);
    cout << "After increment: " << num << endl;

    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    bool status = true;
    negateFlag(status);
    cout << boolalpha << status << endl;

    int num3 = 3;
    incrementByPtr(&num3);
    cout << "After increment: " << num3 << endl;

    double num4 = 6;
    multiplyByTwo(&num4);
    cout << "After multiplying " << num4 << endl;

    int num5 = 10;
    int num6 = 5;
    swapValues(&num5, &num6);
    cout << "After swapping: " << num5 << " " << num6 << endl;

    int val = 42;
    int *ptr = &val;
    cout << "Before nullify: " << val << endl;
    nullifyPointer(ptr);
    cout << "After nullify: " << *ptr << endl;
    cout << "Original: " << val << endl;

    int val1 = 42;
    cout << "Before nullify: " << val1 << endl;
    nullifyPointer(&val);
    cout << "After nullify: " << val1 << endl;

    // Test dereferenceAndSet
    int num8 = 10;
    cout << "Before set: " << num8 << endl;
    dereferenceAndSet(&num8, 20);
    cout << "After set: " << num8 << endl;

    return 0;
}

void printValue(int x)
{
    cout << x << endl;
}

double square(double num)
{
    return num * num;
}

void incrementByRef(int &x)
{
    x++;
}

void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void negateFlag(bool &flag)
{
    flag = !flag;
}

void incrementByPtr(int *x)
{
    if(x != '\0')
    {
        *x += 1;
    }
}

void multiplyByTwo(double *num)
{
    if(num != '\0')
    {
        *num *= 2;
    }
}

void swapValues(int *a, int *b)
{
    if(*a != '\0' && *b != '\0')
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

void nullifyPointer(int *ptr)
{
    if(ptr != '\0')
    {
        *ptr = 0;
    }
}

void dereferenceAndSet(int *ptr, int value)
{
    if(ptr != '\0')
    {
        *ptr = value;
    }
}