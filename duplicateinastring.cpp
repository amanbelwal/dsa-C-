//duplicate in a string
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string str1="";
    unordered_set<string> uniqueyears;
    for(int i=0;i<=str.size();i++)
    {
     if(isdigit(str[i]))
     {
            str1.push_back(str[i]);
     }
     else if(str[i]=='-')
        {
            str1.clear();
        }
     else if(str1.size()==4)
        {
          uniqueyears.insert(str1);
          str1.clear();
        }
     else{
          str1.clear();
        }
    }
    cout<<uniqueyears.size();
    return 0;
}
