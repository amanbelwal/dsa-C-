#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s={"(()())"};
    int x=0,y=0;
    int i=0;
    while(s[i])
    {
        if(s[i]=='(')
            x++;
        else if(s[i]==')')
            y++;
        else{
            cout<<"";
        }
     i++;
    }
    if(x==y)
        cout<<"0 ";
    else if(x>y)
        cout<<x-y<<" ) missing" ;
    else if(x<y)
        cout<<y-x<<" ( missing";
    return 0;
}
