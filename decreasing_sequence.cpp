#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int minMoves(int a[], int n, int k)
{
    int ans=0;
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]){
            int m=(a[i]-a[i-1]-1)/k;
            int s=(m+1)*k;
            a[i]-=s;
            ans+=(m+1);
            ans=ans%mod;
            
        }
        
        
    }
    return ans%mod;
}