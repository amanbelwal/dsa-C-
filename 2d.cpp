//2d ararya
#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n;
   cin>>m;
   int** arr=new int*[m];
   for(int i=0;i<m;i++)
     arr[i]=new int[n];
   for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
       cin>>arr[i][j];
   for(int i=0;i<m;i++)
    {for(int j=0;j<n;j++)
       {
           cout<<arr[i][j]<<" ";
       }
     cout<<endl;
    }
    for(int i=0;i<m;i++)
      delete []arr[m];
    delete []arr;
  return 0;
}
