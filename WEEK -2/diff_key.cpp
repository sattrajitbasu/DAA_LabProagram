
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int diff_key(int arr[],int n,int key)
{
    int count=0;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[j]-arr[i]==key)
        {
            cout<<arr[j]<<"-"<<arr[i]<<"="<<key<<endl;
            count++;
            j--;
            i++;
        }
        else if(arr[j]-arr[i]>key)
            j--;
        else
            i++;
         return count;
    }
}
int main()
{

    int arr[100];
    int n;
    int c;
    cin>>n;
    cout<<"enter your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    int key;
    cout<<"enter your key"<<endl;
    cin>>key;
   c=diff_key(arr,n,key);
   cout<<"total number of pairs are: "<<c<<endl;
}
