//pointers
#include<iostream>
using namespace std;
int main()
{

  int a;
  int *p=&a;
  int q=*p;
  a=5;
  cout<<a;
  cout<<&p<<endl;
  cout<<q;
  return 0;
}
