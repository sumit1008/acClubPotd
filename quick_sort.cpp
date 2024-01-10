#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count = 0;
        int x=1;
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            if(y==x){
                x++;
                count++;
            }
        }
        float f= (float)(n-count)/k;
        cout<< ceil(f) <<endl;
        

    }
}