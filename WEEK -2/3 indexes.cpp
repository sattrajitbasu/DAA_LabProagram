#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[100];
    int n;
    cin>>n;
    cout<<"PLEASE ENTER SORETD ARRAY:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"REQUIRED THREE INDEXES ARE:"<<endl;
    for(int k=n-1;k>=0;k--)
    {

        int j=k-1;int i=0;
       while(i<j)
       {
           if(arr[i]+arr[j]==arr[k])
            {
                cout<<i<<"+"<<j<<"="<<k<<endl;
                break;
            }
            else if(arr[i]+arr[j]>arr[k])
                j--;
                else
                    i++;

       }


    }

}
