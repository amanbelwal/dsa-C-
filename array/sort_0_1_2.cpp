#include<iostream>
#include<vector>
using namespace std;
// Deutch national flag algorithm 
int main()
{
    vector<int> arr ={0,2,1,2,1,0,0,1,2,1,2};
    int mid=0,low=0;
    int high=arr.size()-1;
    while (mid<=high)
    {
        if(arr[mid]==0)
           {
            swap(arr[mid],arr[low]);
            low++;mid++;
           }
           else if(arr[mid]==1)
                   mid++;
                   else  {
                    swap(arr[mid],arr[high]);
                    high--;
                   }
    } 
    for(auto it :arr)
        cout<<it<<" ";
 return 0; 
}