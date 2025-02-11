#include<iostream>
using namespace std;
int binarysearch(int *arr,int key,int s,int e)
{
    if(s>e)
       return -1;
    else
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
           return mid;
           else if(arr[mid]>key)
                 return binarysearch(arr,key,s,mid-1);
           else
             return binarysearch(arr,key,mid+1,e);
    }
}
int main()
{
    int arr[6]={34,65,21,32,56,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=-1;
    int key;
    cout<<"elememt to search for  :";
    cin>>key;
    int s=0;int e=n-1;
    index=binarysearch(arr,key,s,e);
    cout<<"element at position   :"<<index;
    return 0;
}