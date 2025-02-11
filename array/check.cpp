// shift array by 1 to the left
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4,5};
    int temp=arr[0];
    int n=arr.size();
    for(int i=0;i<n-1;i++)
      {
         arr[i]=arr[i+1];
      }
    arr[n-1]=temp;
    for(int i:arr)
      cout<<i<<" ";
    return 0;
}