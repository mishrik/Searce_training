/*Assignment Question 2*/

#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

class SinglyLinkedList
{
  Node *head;

public:
    SinglyLinkedList ()
  {
    head = NULL;
  }

  void add (int val)
  {
    Node *newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
		head = newNode;
    }

    else
    {
		newNode->next = head;
		head = newNode;
    }
  }

  void display ()
  {
    Node *temp = head;
    cout << "\n\nThe Linked List is: ";

    while (temp != NULL)
    {
		cout << temp->data << " ";
		temp = temp->next;
    }
    cout << endl;
  }
};


int
main ()
{
  int n, v;
  cout << "Enter number of nodes you want: ";
  cin >> n;
  SinglyLinkedList s;


  for (int i = 0; i < n; i++)
    {
      cout << "Enter value " << i +1 <<" - ";
      cin >> v;
      s.add(v);
    }
  s.display();

  return 0;
}

