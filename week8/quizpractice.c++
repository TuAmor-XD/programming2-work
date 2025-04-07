#ifndef NODE_H
#define NODE_H

class Node 
{
private:
    int number;
    Node* next;

public:
    Node(int num); 

    int getNumber() ;
    void setNumber(int num); 
    Node* getNext() ;  
    void setNext(Node* nextNode);
    void printList(Node* head);
    void replaceAll(Node* head, int oldNumber, int newNumber);
    bool search(Node* head, int num);

    //Function to print odd numbers
    void printOdd(Node* head);
    //function to find the largest number in the list
    int findLargest(Node* head);
   
    //function to find the sum of numbers in the list
   
    //function to swap the numbers (you are not swapping the nodes) in the first and last nodes
    void swap(Node *first, Node *last);
   
};

#endif

#include <iostream>
using namespace std;

Node::Node(int num) 
{
    number = num;
    next = nullptr; 
}

// Getter for number
int Node::getNumber()  
{  
    return number;
}

// Setter for number
void Node::setNumber(int num) {
    number = num;
}

// Getter for next pointer
Node* Node::getNext()  {
    return next;
}

// Setter for next pointer
void Node::setNext(Node* nextNode) {
    next = nextNode;
}

// Function to print out the list starting from the head node
void Node::printList(Node* head) 
{
    Node* current = head;
    while (current != nullptr) {
        cout << current->number << " ";  // Print the current node's number
        current = current->next;        // Move to the next node
    }
    cout << endl;
}

// Function to replace all occurrences of old number with new number
void Node::replaceAll(Node* head, int oldNumber, int newNumber) 
{
    Node* current = head;
    while(current != nullptr)
    {
        if(current->number == oldNumber)
        {
            current->number = newNumber;
        }
        current = current->next;
    }
}

// Function to search for a number in the list
bool Node::search(Node* head, int num) 
{
    Node* current = head;
    while(current != nullptr)
    {
        if(current->number == num)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

//Function to print odd numbers
void Node::printOdd(Node* head)
{
    Node*current = head;
    bool foundOdd = false;
    while(current != nullptr)
    {
        if(current->number % 2 != 0)
        {
            cout << current->number << " ";
            foundOdd = true;
        }
        current = current->next;
    }
    if(!foundOdd)
    {
        cout << "none";
    }
    cout << endl;
}

//function to find the largest number in the list
int Node::findLargest(Node* head)
{
    int largest = head->number;
    Node* current = head->next;
    while(current != nullptr)
    {
        if(current->number > largest)
        {
            largest = current->number;
        }
        current = current->next;
    }
    return largest;
}
   
//function to find the sum of numbers in the list

// Function to swap the numbers of the first and last node (not the nodes themselves)
void Node::swap(Node* first, Node* last) 
{
    if(first != nullptr || last != nullptr)
    {
        int temp = first->number;
        first->number = last->number;
        last->number = temp;

    }
}

   
   
int main() {
    // Create nodes
    Node node1(10);  // First node with number 10 -  Assume address is X20
    Node node2(20);  // Second node with number 20 - Assume address is X21
    Node node3(30);  // Third node with number 30  =Assume address is X22

    // Link the nodes
    node1.setNext(&node2);  // Link node1 to node2
    node2.setNext(&node3);  // Link node2 to node3

    // Print the original list
    cout << "Original list: ";
    node1.printList(&node1);  // Print using the head node (node1)

    // Call swap function (swap numbers of the first and last node)
    node1.swap(&node1, &node3);  // Pass first and last nodes

    // Print the list after swapping numbers
    cout << "After swapping first and last node numbers: ";
    node1.printList(&node1);

    cout << "Largest number: " << node1.findLargest(&node1) << endl;    
   
    //Call function to print odd numbers
    node1.printOdd(&node1);
   
    //call function to get the sum of all numbers
   
    //delete the last node
    node2.setNext(nullptr);
    node1.printList(&node1);


    return 0;
}