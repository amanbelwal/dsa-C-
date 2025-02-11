#include<iostream>
using namespace std;

class node{
public:
       int data;
       node *prev;
       node *next;
       node(int d)
         {
             this->data=d;
             this->prev=NULL;
             this->next=NULL;
         }
       void print(node *head)
       {
        node *temp=head;
        while(temp != NULL)
        {
            cout<<temp->data;
            temp=temp->next;
             cout<<endl;
        }
       }
       void insert(node* head,int d)
        {

          node* temp=new node(d);
          node* tail=head;
          while(tail->next!=NULL)
          {
            tail=tail->next;
          }
          tail->next=temp;
          temp->prev=tail;
          temp->next=NULL;
        }
};
void getlength(node *head)
{
    node*temp=head;
    int count=0;
    while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
    cout<<count;

}

int main()
{
    node* a=new node(10);
    node* head=a;
    a->insert(head,78);
    a->print(head);
    getlength(head);
    return 0;
}
