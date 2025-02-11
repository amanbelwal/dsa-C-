#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={6,8,3,5,1};
    int tem=0;
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<(5-i);j++)
           if(arr[j]>arr[j+1])
           {
               tem=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=tem;
           }
    }
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}

