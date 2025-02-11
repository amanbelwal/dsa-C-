#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={21,34,45,-1,-43,-56,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}
