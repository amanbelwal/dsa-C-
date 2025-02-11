#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n)
{
    long long sum;
    int k=0,i,ans;
    do{
    sum=0;
    for(i=k;i<n;i++)
       sum=sum+arr[i];
    if(sum>0)
    {
         return (n-k);

    }
    k++;
    if(k>=n)
        return 0;
    }while(sum<=0);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int *arr=new int(n);
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    sort(arr,arr+n);
    int x=maxsum(arr,n);
    cout<<x<<endl;
    }
    return 0;
}
