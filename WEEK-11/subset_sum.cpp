#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  bool subset(vector<int>arr,int sum)
    {
        int N=arr.size();
       vector< vector<bool>> t(N+1, vector<bool> (sum+1));
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                    t[i][j]=false;
                if(j==0)
                    t[i][j]=true;
            }
        }
        for(int i=1;i<N+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
              t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[N][sum];
    }

    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        if(sum%2!=0)
            return false;
        else
        {
            return subset(nums,sum/2);
        }
    }
    int main()
    {
        vector<int>nums;
        int n;
        cout<<"Enter number of elements:"<<endl;
        cin>>n;
        cout<<"Enter elements:"<<endl;
        for(int i=0;i<n;i++)
        {
          int temp;
          cin>>temp;
          nums.push_back(temp);
        }
        bool result;
        result=canPartition(nums);
        if(result)
            cout<<"yes"<<endl;
        else
            cout<<"No"<<endl;
      return 0;
    }
