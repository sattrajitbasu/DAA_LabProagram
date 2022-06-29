#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int lb,int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(arr[start]<=pivot)
            start++;
        while(arr[end]>pivot)
            end--;
        if(start<end)
            swap(arr[start],arr[end]);
    }
    swap(arr[lb],arr[end]);
    return end;
}
void quick_sort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(arr,lb,ub);
        quick_sort(arr,lb,loc-1);
        quick_sort(arr,loc+1,ub);
    }
}
int main()
{
    int arr[100];
    cout<<"enter total number of elements"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lb=0;
    int ub=n-1;
    quick_sort(arr,lb,ub);
    cout<<"your sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
