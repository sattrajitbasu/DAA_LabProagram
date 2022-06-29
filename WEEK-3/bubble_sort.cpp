#include<iostream>
using namespace std;
int bubble_sort(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                c++;
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    return c;
}

int main()
{
    int arr[100];
    int n;
    int count=0;
    cout<<"enter total number of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   count=bubble_sort(arr,n);
    cout<<"printing elements after applying bubble sort:"<<endl;;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"total comparisons are:"<<count;

}
