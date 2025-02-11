#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
int minSubarraySum(int arr[], int n, int k)
{
    long long min=0,min1=0;
    for(int i=0;i<k;i++)
        min1=min1+arr[i];
    int l=k;
    min=min1;
    for(int i=1;i<(n-k);i++)
    {
        min=min-arr[i-1]+arr[l++];
        if(min1>min)
            min1=min;
    }
    return min1;
}
/*int minSubarraySum(int arr[], int n, int k)
{
    long long sum;
    long long mini=0;
    for(int i=0;i<k;i++)
        mini=mini+arr[i];
      //  cout<<mini;
    for(int i=1;i<(n-k+1);i++)
    {
        sum=0;
        for(int j=i;j<(i+k);j++)
           sum=sum+arr[j];
        //   cout<<j<<" ."<<sum;}
        if(mini>sum)
            mini=sum;
    }
    return mini;
}*/

int main()
{
  int n,k;
  cin>>n>>k;
  int *arr=new int(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"he"<<minSubarraySum(arr,n,k);
  return 0;
}

/*8 3
10 4 2 5 6 3 8 1*/
