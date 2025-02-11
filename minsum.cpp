#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the size of array";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter marks in subject";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
          {
              if(arr[i]==arr[j])
                  arr[j]++;
          }
     }
  //  for(int i=0;i<n;i++)
    //    cout<<arr[i];
    for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];

        }
            cout<<sum<<endl;
    return 0;
}
