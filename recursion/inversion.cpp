//inversion
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,5,1,6,9};
    int count=0;
    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            {
               if(arr[j]<arr[i])
                  count++;
            }
    cout<<"inversion count :"<<count;
    return 0;
}
