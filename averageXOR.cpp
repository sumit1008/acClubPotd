#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<1<<" "<<3<<" ";
            while(n>2){
                cout<<2<<" ";
                n--;
            }
            

            cout<<endl;
        }

    }
}