#include<iostream>
using namespace std;
int merge1(int *arr,int s,int l)
{
    int mid=(s+l)/2;
    int ic=0;
    int len1=mid-s+1;
    int len2=l-mid;

    int *first=new int[len1];
    int *sec=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++)
        first[i]=arr[k++];

    k=mid+1;

    for(int i=0;i<len2;i++)
        sec[i]=arr[k++];

    int index1=0;int index2=0;
    k=s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<=sec[index2])
            arr[k++]=first[index1++];
            else
            {
                ic=ic+(len1-index1);
                arr[k++]=sec[index2++];
            }
    }
    while(index2<len2)
        arr[k++]=sec[index2++];
    while(index1<len1){
        arr[k++]=first[index1++];
    }
    delete []first;
    delete []sec;
    return ic;
}
int mergesort(int *arr,int s,int l)
{
    int ic=0;
    if(s<l)
    {
    int mid=(s+l)/2;
    //left sorted array
    ic+=mergesort(arr,s,mid);
    //right sorted array
    ic+=mergesort(arr,mid+1,l);
     //merge two array
    ic+=merge1(arr,s,l);
    }
    return ic;
}
int main()
{
    int arr[5]={5,6,7,3,4};
    int l=4,inv=0;
    cout<<"inversion :"<<mergesort(arr,0,l)<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
