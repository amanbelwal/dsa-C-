#include<iostream>
#include<stdio.h>
using namespace std;
int sumdigit(int z)
{
 int sum=0;
 int k;
 while(z!=0)
 {
     k=z%10;
     sum=sum+k;
     z=z/10;
 }
 return sum;
}
int great(int x,int y)
{
    int x1,y1;
    x1=sumdigit(x);
    y1=sumdigit(y);
    if(x1>y1)
        return -1;
    else if(y1>x1)
        {
            cout<<y<<endl;
            return 1;
        }
    else{
        if(x>y)
            return -1;
         else{
            cout<<y<<endl;
            return 1;
         }
        }
}
void solve(int arr[],int n)
{ int a;
   for(int k=0;k<n;k++){
       if(k==(n-1))
           cout<<"-1"<<endl;
   for(int i=k+1;i<n;i++){

     a=great(arr[k],arr[i]);
     if(a==1)
        break;
   }
    if(a==-1)
        cout<<"-1"<<endl;
 }
}
int main()
{
    int arr[5]={11,7,14,2,6};
    solve(arr,5);
    return 0;
}
