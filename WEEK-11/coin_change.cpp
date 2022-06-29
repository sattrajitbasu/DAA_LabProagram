#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int  t[n+1][amount+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(coins[i-1]<=j)
                {
                    t[i][j]=t[i][j-coins[i-1]]+t[i-1][j];
                }
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][amount];
}
int main()
{
    int n;
    cout<<"Enter the number of coins"<<endl;
    cin>>n;
    int amount;
   vector<int>coins;
   cout<<"Enter the value of each coins"<<endl;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        coins.push_back(temp);
    }
    cout<<"Enter the total amount"<<endl;
    cin>>amount;
    int c=change(amount,coins);
    cout<<"Total number of ways are: "<<c;
    return 0;
}




