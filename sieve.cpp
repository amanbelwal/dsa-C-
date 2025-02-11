//sieve of eratosthanes
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,count=0;
  vector<bool> prime(n+1,true);
  cin>>n;
  prime[0]=prime[1]=0;
  for(int i=2;i<=n;i++)
  {
   if(prime[i])
   {
       count++;
       for(int j=2*i;j<n;j=j+i)
       {
        prime[j]=0;
       }
   }

  }
  cout<<count;
  return count;
}
