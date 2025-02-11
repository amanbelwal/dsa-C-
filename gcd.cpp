//gcd and lcm
#include<iostream>
using namespace std;
int main()
{
  int a,b,gcd;
  cin>>a>>b;
  int z=a,y=b;
  while(true)
  {
   if(a==0)
   {
     gcd=b;
     cout<<"gcd"<<b;
      break;
   }
   else if(b==0)
    {
     gcd=a;
     cout<<"gcd :"<<a;
     break;
    }
   else if(a>b)
    a=a-b;
     else
       b=b-a;
  }
  int lcm=0;
  lcm=(y*z)/gcd;
  cout<<"\n lcm :"<<lcm;
  return 0;
}
