#include<iostream>
#include<vector>
using namespace std;
void solve(string s,string str,vector<string> &ans,int ind)
{
    if(s[ind]=='\0')
    {
        ans.push_back(str);
        return ;
    }
    //exclude
    solve(s,str,ans,ind+1);
    //include
    char element=s[ind];
    str.push_back(element);
    solve(s,str,ans,ind+1);
}
int main()
{

    string s="abc";
    cin>>s;
    string str="";
    vector<string> ans;
    int ind=0;
    solve(s,str,ans,ind);
    for(int i=0;i<ans.size();i++)
    {
     cout<<ans[i];
     cout<<endl;
    }
    return 0;
}
