#include<iostream>
using namespace std;
int partition1(int *arr,int s,int l)
{
    int pivot=arr[s];
    int count1=0;
    for(int i=s+1;i<=l;i++)
        if(arr[i]<=pivot)
           count1++;
    int pindex=s+count1;
    swap(arr[pindex],arr[s]);
    int i=s;
    int j=l;
    while(i<pindex && j>pindex)
    {
        while(arr[i]<arr[pindex])
            i++;
        while(arr[j]>arr[pindex])
            j--;
        if(i<pindex && j>pindex)
            swap(arr[i++],arr[j--]);
    }
    return pindex;
}
void quicksort(int *arr,int s,int l)
{
    if(s>=l)
        return ;
        //for pivot element
    int p=partition1(arr,s,l);

    quicksort(arr,s,p-1);

    quicksort(arr,p+1,l);
}
int main()
{
    int arr[6]={2,5,1,6,8,3};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    return 0;
}
