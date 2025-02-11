#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void solve(string s,string out,int index,vector<string> &ans,string mappi[])
{
    if(index>=s.length())
     {
         ans.push_back(out);
         return ;
     }
    int x=s[index]-'0';
    string value=mappi[x];
    for(int i=0;i<value.length();i++)
    {
        out.push_back(value[i]);
        solve(s,out,index+1,ans,mappi);
        out.pop_back();
    }
}
int main()
{
    string s="234";
    if(s.length()==0)
        return 0;
    string mappi[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string out="";
    vector<string> ans;
    int index=0;
    solve(s,out,index,ans,mappi);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
        cout<<endl;
    }
    return 0;
}
