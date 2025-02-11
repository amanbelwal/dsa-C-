#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(string str,vector<string> &ans,int index)
{

    if(index>=str.length())
    {
        ans.push_back(str);
        return;
    }
    for(int j=index;j<str.length();j++)
    {
        swap(str[j],str[index]);
        solve(str,ans,index+1);
        swap(str[j],str[index]);
    }
}
int main()
{
    string str;
    getline(cin,str);
    vector<string> ans;
    int index=0;
    solve(str,ans,index);
     for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<",";
    return 0;

}
