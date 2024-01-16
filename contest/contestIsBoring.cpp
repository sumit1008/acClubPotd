#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

    vector<ll> nums(n), vec;
    for(ll &a:nums){
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    

    if(nums == vec) cout<<0<<endl;
    else if(nums[0] == n && nums[n-1]==1)   cout<<3<<endl;
    else if(nums[0] == n || nums[n-1]==1)   cout<<2<<endl;
    else if(nums[0] != 1 && nums[n-1] != n) cout<<2<<endl;
    else cout<<1<<endl;


    }
}