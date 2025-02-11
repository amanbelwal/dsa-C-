#include<iostream>
using namespace std;
class node
{
  public:
         int data;
         node* next;
    hell()
    {
        this->data=0;
        this->next=NULL;
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
    void print(node *head)
    {
        while(head!=NULL)
        {
            cout<<head->data<<endl;
            head=head->next;
        }
    }
    void middle(node* head)
    {
        int count=0;
        node* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int i=0;
        while(head!=NULL)
        {
            if(count%2!=0)
            {
               if(i==(count/2))
                 {
                     cout<<head->data;
                     break;
                 }
            }
            else{
                if(i==(count/2-1))
                 {
                     cout<<head->data;
                     break;
                 }
            }
            i++;
            head=head->next;
        }
    }
};
int main()
{
    node* hell=new node;
    node* head=NULL;
    hell->push(&head,10);
    hell->push(&head,13);
    hell->push(&head,12);
    hell->push(&head,11);
    hell->print(head);
    cout<<"middle";
    hell->middle(head);
    return 0;
}
