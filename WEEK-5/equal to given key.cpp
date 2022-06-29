
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
int n,key;
cout<<"enter the number in array"<<endl;
cin>>n;
cout<<"enter your array:"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
cout<<"enter your key"<<endl;
cin>>key;
int a=0;
int b=n-1;
while(a<b)
{
    if((arr[a]+arr[b])==key)
    {
        cout<<arr[a]<<" "<<arr[b]<<endl;
        a++;
        b--;
    }
    else if((arr[a]+arr[b])>key)
    {
        b--;
    }
    else if((arr[a]+arr[b])<key)
    {
        a++;
    }

}
}


