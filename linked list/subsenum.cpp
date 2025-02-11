#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(int *arr,int n,vector<int> output,int ind,vector<vector<int>> &ans)
{
 if(ind>=n)
 {
     ans.push_back(output);
     return;
 }
 //exclude
  solve(arr,n,output,ind+1,ans);
  //include
  int element=arr[ind];
  output.push_back(element);
  solve(arr,n,output,ind+1,ans);

}
int main()
{
    int arr[3]={5,7,1};
    int X;
    cin>>X;//integer
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> ans;
    vector<int> output;
    int ind=0;
    int count =0;
    solve(arr,n,output,ind,ans);
    for(int i=0;i<ans.size();i++)
      { long x1=0;
          for(int j=0;j<ans[i].size();j++)
              {
                  x1=x1^ans[i][j];
              }
              if(x1&X==0)
                 count++;
      }
      cout<<count;
    cout<<endl;
    return 0;
}
