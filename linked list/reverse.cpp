#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node()
    {
        this->data=0;
        this->next=NULL;
    }
    void reverse(node* head)
    {
        node *prev=NULL,*nextnode=NULL;
        node *curr=head;
        while(curr!=NULL)
        {
          nextnode=curr->next;
          curr->next=prev;
          prev=curr;
          curr=nextnode;
        }
        head=prev;
        cout<<"after reversing"<<endl;
        print(head);

    }
    void print(node *head)
    {
        while(head!=NULL)
        {
            cout<<head->data<<endl;
            head=head->next;
        }
    }
    void push(node** head,int data)
    {
        node *temp=new node();
        node *tail=*head;
        temp->data=data;
        temp->next=NULL;
        if(*head==NULL)
        {
            *head=temp;
            return;
        }

            while(tail->next!=NULL)
                tail=tail->next;
            tail->next=temp;
    }
};
int main()
{
    node hell;
    node *head=NULL;
    hell.push(&head,10);
    hell.push(&head,12);
    hell.print(head);
    hell.reverse(head);
    return 0;
}
