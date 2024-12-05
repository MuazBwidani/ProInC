// Fourth Hw 
//Ad / SoyAd : MUAZ BWIDANI
//Öğrenci Num : 1306190101

#include <iostream>
#include <time.h>
using namespace std;


class Node
{
public:
    int data;
    Node* next;
};

/////////////////////////////
void push(Node** head_ref, int new_data)
{
    
    Node* new_node = new Node();

   
    new_node->data = new_data;

    
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

//////////////////////////////////////

void printList(Node* node)
{
    while (node != NULL)
    {
        cout << " " << node->data<<endl;
        node = node->next;
    }
}

//////////////////////////////////////


int main()
{
    int x, y;
    Node* head = NULL;
  


    for (int i = 1; i <= 100; i++)
    {
        x = rand() % 1001;

        
        push(&head, x);
    }
    
    printList(head);


    return 0;
}