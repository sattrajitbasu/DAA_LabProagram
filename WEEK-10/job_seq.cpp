#include<bits/stdc++.h>
using namespace std;
struct Job
{
    int id;	 // Job Id
    int dead; // Deadline of job
    int profit; // Profit if job is over before or on deadline
};
class Solution
{
    public:
    static bool comp(Job a,Job b)
    {
        return a.profit>b.profit;
    }

    vector<int> JobScheduling(Job arr[], int n)
    {
        sort(arr,arr+n,comp);
        bool done[n]={false};
        int num=0;
        int profit1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=min(n,arr[i].dead)-1;j>=0;j--)
            {
                if(done[j]==false)
                {
                    num++;
                    profit1+=arr[i].profit;
                    done[j]=true;
                    break;
                }
            }
        }
        return {num,profit1};
    }
};
int main()
{

        int n;
        cin >> n;
        Job arr[n];
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
	return 0;
}
