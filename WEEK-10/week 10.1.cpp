#include <iostream>
#include <algorithm>
using namespace std;
const int Nmax = 100005;
struct Activity {
    int start, finish;
    bool operator < (const Activity &x) const {
        return finish < x.finish;
    }
};
Activity act[Nmax];

int main() {
    int n;
    cout<<"Enter total number of Activities ";
    cin >> n;
    cout<<"Enter Start and Finish time"<<endl;
    for(int i = 1; i <= n; i++) {
        cin >> act[i].start >> act[i].finish;
    }
    sort(act + 1, act + n + 1);
    int ans = 0, currFinish = -1;
    cout<<"List of Selected activities"<<endl;
    for(int i = 1; i <= n; i++) {
        if(currFinish < act[i].start) {
            ans++;
            cout<<i<<",";
            currFinish = act[i].finish;
        }
    }
    cout<<"No. of non-conflicting activities:"<<endl;
    cout << ans << "\n";
    return 0;
}
