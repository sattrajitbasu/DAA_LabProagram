#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, m=0,n,c,i;
    cout<<"enter the target";
    cin>>t;
    while(m<t){
        c=0;
        cout<<"enter the size of thte array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"enter the elements into the array..."<<endl;
        for( i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cout<<"enter the key element to be search into the array.."<<endl;
        cin>>key;
         for( i=0;i<n;i++){
             c++;
            if(key==arr[i]){
                cout<<"key found..."<<endl;
                cout<<"number of comparisions are.."<<endl;
                break;
            }
    }
         if(i==n){
           cout<<"element not found.."<<endl;
            cout<<"number of comparisions are"<<c;
         }

        m++;
        cout<<"\n";
    }
}
