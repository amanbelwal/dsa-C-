#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
struct Node{
  public:
        int data;
        Node* next;
  public:
        Node(int data1,Node* next1)
         {
           data=data1;
           next=next1;
         }
};
Node* converttoLL(vector<int> &arr)
{
 Node* head=new Node(arr[0],NULL);
 Node* mover=head;
 for(int i=1;i<arr.size();i++)
 {
    Node* temp=new Node(arr[i],NULL);
    mover->next=temp;
    mover=temp;
 }
 return head;
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* delete_Head(Node* head)
{
  Node* mover=head;
  if(head==NULL)
    return NULL;
  else{
    head=head->next;
    mover->next=NULL;
    delete mover;
  }
  return head;
}
Node* delete_Tail(Node* head)
{
  Node* mover=head;
  Node* temp=new Node(0,NULL);
  if(head==NULL || head->next==NULL)
    return NULL;
  while(mover!=NULL)
  {
    if(mover->next->next==NULL)
    {
        temp=mover->next;
        mover->next=NULL;
        delete temp;
        return head;
    }
    mover=mover->next;
  }
}
Node* delete_element(Node* head,int ele)
{
  Node* mover=head;
  Node* prev=NULL;
  if(mover->data==ele)
  {
      head=head->next;
      delete mover;
      return head;
  }
  while(mover!=NULL)
  {
      if(mover->data==ele)
      {
          prev->next=prev->next->next;
          delete mover;
          break;
      }
      prev=mover;
      mover=mover->next;
  }
  return head;
}
int main()
{
    vector<int> arr={12,5,4,6};
    Node* head=converttoLL(arr);
    int ele;
    //head=delete_Head(head);
    //head=delete_Tail(head);
    cout<<"Enter the element you want to delete";
    cin>>ele;
    head=delete_element(head,ele);
    display(head);
    return 0;
}
