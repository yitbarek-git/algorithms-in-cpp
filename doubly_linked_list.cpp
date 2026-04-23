#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node *prv;
};

void insertFront(Node*& head, int data)
{
  Node* newNode = new Node;
  newNode->data = data;
  newNode->next = head;
  newNode->prv = nullptr;

  if(head != nullptr)
    head->prv = newNode;
  head = newNode;
}

void Display(Node* head){
  Node* temp = head;
  while(temp != nullptr){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "Null" << endl;  
}

// Add function to clean up memory
void deleteList(Node*& head) {
  Node* current = head;
  while(current != nullptr) {
    Node* next = current->next;
    delete current;
    current = next;
  }
  head = nullptr;
}

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
  
  deleteList(head);
  
  return 0;
}