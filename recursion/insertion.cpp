#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    if(n<=1)
        return ;
    else{
        insertionsort(arr,n-1);
        int last=arr[n-1];
        int i=n-2;
        while(i>=0 && arr[i]>last)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=last;
    }
}
int main()
{
    int arr[6]={4,2,3,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int z=1;
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
