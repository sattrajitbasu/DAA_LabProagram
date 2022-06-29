#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    int key;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key"<<endl;
    cin>>key;
    int flag=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key&&flag==0)
        {
            cout<<"key is found"<<endl;
            count++;
            flag=1;
        }
        else if(arr[i]==key)
            count++;
    }
    cout<<key<<" "<<"has appeared"<<" "<<count<<" "<<"times";

}
