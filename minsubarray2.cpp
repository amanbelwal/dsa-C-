#include <bits/stdc++.h>
int minSubarraySum(int arr[], int n, int k)
{
    long long min=0,min1=0;
    for(int i=0;i<k;i++)
        min1=min1+arr[i];
    int l=k;
    min=min1;
    for(int i=1;i<(n-k);i++)
    {
        min=min-arr[i-1]+arr[l++];
        if(min1>min)
            min1=min;
    }
    return min1;
}
