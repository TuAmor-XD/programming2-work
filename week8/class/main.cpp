#include <iostream>
#include "Node.hpp"
using namespace std;
    
int main() 
{
    Node student1("Alice");
    Node student2("Mary");
    Node student3("John");

    student1.printList(&student1);

    return 0;
}