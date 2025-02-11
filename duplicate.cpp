#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,3,1};
    for(int i=0;i<5;i++)
    {
     int index=arr[i]%5;
     arr[index]=arr[index]+5;
    }
    for(int i=0;i<5;i++)
        if((arr[i]/5)>=2)
             cout<<i<<" ";
    return 0;
}
