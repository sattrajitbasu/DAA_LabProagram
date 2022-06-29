#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>vec,int i,int j)
{
    if(i>=j)
        return 0;
    int mn=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int tempans=solve(vec,i,k)+solve(vec,k+1,j)+vec[i-1]*vec[k]*vec[j];
        if(tempans<mn)
            mn=tempans;
    }
    return mn;
}
int main()
{
    int n;
    cout<<"Enter number of elements in array:"<<endl;
    cin>>n;
   vector<int>vec;
   cout<<"ENTER ELEMENTS"<<endl;
   for(int i=0;i<n;i++)
   {
       int temp;
       cin>>temp;
       vec.push_back(temp);
   }
  int l=solve(vec,1,n-1);
  cout<<"Min multiplication is: "<<l;
  return 0;
}
