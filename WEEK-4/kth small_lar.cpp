#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n;
    int k;
    cout<<"enter total number in array"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
  cout<<"enter the value of k"<<endl;
  cin>>k;
  cout<<k<<"th largest is:"<<arr[n-k]<<endl;
  cout<<k<<"th smallest is:"<<arr[k-1];

}
