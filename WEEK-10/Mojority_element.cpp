#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool majority(vector<int>vec,int n)
{
    int flag=0;
    int candidate=-1;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(flag==0)
        {
            candidate=vec[i];
            flag=1;
        }
        else{
                if(vec[i]==candidate)
                   flag++;
             else
                   flag--;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(vec[i]==candidate)
            count++;
    }
    return count>n/2?true:false;
}
int main()
{
    cout<<"Enter number of elements in array:";
    int n;
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>vec[i];
    }
    bool c=majority(vec,n);
    if(c==true)
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
}
