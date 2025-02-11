#include<iostream>
#include<stdio>
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
int main()
{
    vector<int> arr={12,5,4,6};
    Node* y =new Node(arr[0],NULL);
    cout<<y;
    return 0;
}
