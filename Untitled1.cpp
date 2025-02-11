#include<iostream>
using namespace std;
int main()
{
    int arr[4]={10,11,12,21};
    int *ptr1=&arr[0];
    int *ptr=ptr1+3;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr1<<endl;
    return 0;
}
