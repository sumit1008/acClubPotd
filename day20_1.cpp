#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& v) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        long long ans = 0, i = 0, j = v.size() - 1;

        while (i < j) {
            long long temp = (j - i) * min(v[i], v[j]);
            ans = max(temp, ans);
            if (v[i] < v[j]) {
                i++;
            } else {
                j--;
            }
        }

        cout << ans;
        return ans;
    }
};
int main()
{
    cout<<"world";
}