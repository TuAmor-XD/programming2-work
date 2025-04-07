#ifndef NODE_H
#define NODE_H

class Node {
private:
    int number;
    Node* next;

public:
    Node(int num);
    int getNumber();
    void setNumber(int num);
    Node* getNext();
    void setNext(Node* nextNode);
    void printList(Node* head);
    void replaceAll(Node* head, int oldNumber, int newNumber);
    bool search(Node* head, int num);
    void printOdd(Node* head);
    int findLargest(Node* head);
    int sum(Node* head);
    void swap(Node *first, Node *last);
};

#endif

#include <iostream>
using namespace std;

Node::Node(int num) {
    number = num;
    next = nullptr;
}

int Node::getNumber() {
    return number;
}

void Node::setNumber(int num) {
    number = num;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node* nextNode) {
    next = nextNode;
}

void Node::printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->number << " ";
        current = current->next;
    }
    cout << endl;
}

void Node::replaceAll(Node* head, int oldNumber, int newNumber) {
    Node* current = head;
    while (current != nullptr) {
        if (current->number == oldNumber) {
            current->number = newNumber;
        }
        current = current->next;
    }
}

bool Node::search(Node* head, int num) {
    Node* current = head;
    while (current != nullptr) {
        if (current->number == num) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void Node::printOdd(Node* head)
{
    Node* current = head;
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
        cout << "None";
    }
    cout << endl;
}

int Node::findLargest(Node* head) {
    if (head == nullptr) {
        return 0; // Simple default value for empty list
    }
    
    int largest = head->number;
    Node* current = head->next;
    
    while (current != nullptr) {
        if (current->number > largest) {
            largest = current->number;
        }
        current = current->next;
    }
    
    return largest;
}

int Node::sum(Node* head) {
    int total = 0;
    Node* current = head;
    while (current != nullptr) {
        total += current->number;
        current = current->next;
    }
    return total;
}

void Node::swap(Node* first, Node* last) {
    if (first == nullptr || last == nullptr) {
        cerr << "Invalid nodes for swap!" << endl;
        return;
    }
    int temp = first->number;
    first->number = last->number;
    last->number = temp;
}

int main() {
    // Create nodes
    Node node1(10);
    Node node2(20);
    Node node3(30);

    // Link the nodes
    node1.setNext(&node2);
    node2.setNext(&node3);

    // Print the original list
    cout << "Original list: ";
    node1.printList(&node1);

    // Test swap function
    node1.swap(&node1, &node3);
    cout << "After swapping first and last node numbers: ";
    node1.printList(&node1);

    // Test findLargest
    cout << "Largest number: " << node1.findLargest(&node1) << endl;

    // Test printOddNumbers
    node1.printOdd(&node1);

    // Test sum
    cout << "Sum of numbers: " << node1.sum(&node1) << endl;

    // Test replaceAll
    node1.replaceAll(&node1, 10, 100);
    cout << "After replacing 10 with 100: ";
    node1.printList(&node1);

    // Test search
    cout << "Is 20 in the list? " << (node1.search(&node1, 20) ? "Yes" : "No") << endl;
    cout << "Is 50 in the list? " << (node1.search(&node1, 50) ? "Yes" : "No") << endl;

    // Delete the last node
    node2.setNext(nullptr);
    cout << "After deleting last node: ";
    node1.printList(&node1);

    return 0;
}