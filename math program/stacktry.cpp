#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s1;
    s1.push(3);
    s1.push(4);
    cout<<s1.size();
    int i=s1.size()-1;
    while(!s1.empty())
    {

        cout<<s1.top();
        s1.pop();
    }
    return 0;
}
