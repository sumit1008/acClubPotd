#include<bits/stdc++.h>
using namespace std;
string makeSmallestPalindrome(string s) {
        int n=s.length();
        string ans="";
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                ans+=s[i];
            }
            else if(s[i]<s[j]){
                ans+=s[i];
            }
            else{
                ans+=s[j];
            }
            i++;j--;
        }
        string temp=ans;
        reverse(temp.begin(),temp.end());
        if(n%2==0){
            ans+=temp;
        }
        else{
            ans+=s[n/2];
            ans+=temp;
        }
        return ans;
    }
int main()
{
    cout<<"world";
}