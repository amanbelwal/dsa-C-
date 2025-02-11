#include<iostream>
#include<map>
#include<vector>
using namespace std;
void two_sum(vector<int> arr , int target)
{
    int n =arr.size();
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
       int val=target-arr[i];
       if(mpp.find(val)!=mpp.end())
        {   
          cout<<mpp[val]<<" "<<i;
          return ;
        }
       mpp[arr[i]]=i; 
    }
    return;
}
int main()
{
    vector<int> arr={2,5,7,12};
    int target =17; 
    two_sum(arr,target);
    return 0;
}