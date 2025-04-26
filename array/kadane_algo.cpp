#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int sum=0;
    int maxi=nums[0];
    int f=0,l=0;
    for(int i=0;i<nums.size();i++)
    {
      sum=sum+nums[i];
      if(sum>=maxi)
         {
            maxi=sum;
            l=i;
         }
      if(sum<0)
      {
         sum=0;
         f=i+1;
      }
    }
    while(f<=l)
     {
         cout<<nums[f]<<" ";
         f++;
     }
    return maxi;
}

int main()
{
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int x = maxSubArray(nums);
    return x;
}
