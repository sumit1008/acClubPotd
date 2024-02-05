#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans=0;
        long long ch=num;
        long long temp=pow(10,k-1);
        while(num>=temp){
            long long d= num % static_cast<long long>(pow(10,k));
            
            num/=10;
            
            if(d!=0 &&ch % d ==0 ){
                ans++;
            }
        }
        return ans;
    }
};
int main()
{
    cout<<"world";
}