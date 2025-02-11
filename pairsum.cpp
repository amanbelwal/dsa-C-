#include<bits/stdc++.h>
#include<iostream>
#include<vector>
vector<vector<int>> pairSum(vector<int> &arr, int s){

    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++)
          for(int j=i+1;j<arr.size();j++)
              if(arr[i]+arr[j]==s)
              {
                  vector<int> v;
                  v.push_back(min(arr[i],arr[j]));
                  v.push_back(max(arr[i],arr[j]));
                  ans.push_back(v);
               }
   sort(ans.begin(),ans.end());
   for(int i=0;i<ans.size();i++)
        for(auto j=ans.begin();j!=ans.end();j++)
            cout<<v[i][j];
}
int main()
{
    vector<int> arr1;
    int s,n;
    cout<<"enter the sum";
    cin>>s;
    cout<<"vector array size:";
    cin>>n;
    for(int i=0;i<n;i++)
        arr1.push_back(i);
    return 0;
}
