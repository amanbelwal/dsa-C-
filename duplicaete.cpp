#include<iostream>
#include<algorithm>
//#include<vector>
using namespace std;
int main()
{
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  /*for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
               cout<<arr[i]<<" ";
       }
    }
    */
  sort(arr,arr+n);
  int k,mid,s,e;
  for(int i=0;i<n;i++)
  {
      k=arr[i];
      s=i+1;
      e=n-1;
      mid=s+(e-s)/2;
        while(s<=e)
        {
          if(arr[mid]>k)
             s=mid+1;
             else if(arr[mid]==k)
                    cout<<arr[mid]<<" ";
                  else
                    e=mid-1;
        }
  }
  return 0;
}
