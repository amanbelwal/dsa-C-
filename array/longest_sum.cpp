#include<iostream>
#include<vector>
#include <map>
using namespace std;
int longest_sum(vector<int> arr,int k)
{
     int n =arr.size();    
     map<long long,int> mpp;
     long long sum=0;
     int len=0;
     for(int i=0;i<n;i++)
      {
         sum= sum +arr[i];
         if(sum == k )
            len = max(len,i+1);
         if(mpp.find(sum-k) != mpp.end())
         {
            len=max(len,i-mpp[sum-k]);
         }   
         if(mpp.find(sum)==mpp.end())
             mpp[sum]=i; 
      } 
      return len;
}
int main()
{
     vector<int> arr={1,0,0,6,0};
     int k;
     cout<<"Enter your number";
     cin>>k;
     int x =longest_sum(arr,k);
     cout<<x;
     return 0;
}
