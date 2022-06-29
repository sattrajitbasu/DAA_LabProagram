#include<iostream>
using namespace std;
int selection_sort(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
                c++;
            }
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
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
   count=selection_sort(arr,n);
    cout<<"printing elements after applying selection sort:"<<endl;;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"total comparisons are:"<<count;

}
