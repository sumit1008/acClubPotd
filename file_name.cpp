#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int i=0,j=1,k=2;
    while(k<n){
        if(s[i]=='x'&& s[j]=='x' && s[k]=='x'){
            ans++;
            i++;
            j++;
            k++;
        }
        
        else if(s[k]!='x'){i=k+1;j=k+2;k=k+3;}
        else{
            i++;
            j++;
            k++;
        }
    }
    cout<<ans;
}