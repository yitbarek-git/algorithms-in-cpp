#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

void insertFront(Node*& head, int data)
{
  Node* newNode = new Node;
  newNode->data = data;
  newNode->next = nullptr;
  head = newNode;
}

void Display(Node* head){
Node* temp = head;
while(temp!=nullptr){
  cout<< temp->data<< " ";
  temp= temp->next;
}
cout<<"Null";
};
int main()
{
  Node* head = nullptr;
  insertFront(head, 1);
  insertFront(head, 2);
  insertFront(head, 3);
  insertFront(head, 4);
  insertFront(head, 5);
  insertFront(head, 6);
  
  Display(head);

  return 0;
}
