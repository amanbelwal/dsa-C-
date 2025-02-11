#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int *ptr=&a;
    int **ptr1=&ptr;
    cout<<ptr;
    cout<<*ptr<<endl;
    cout<<**ptr1;
    cout<<endl;
    cout<<&a<<endl;
    cout<<&ptr<<endl;
    cout<<&ptr1;
    return 0;
}
