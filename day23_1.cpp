#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        set<int> st;
        while (true) {
            int sum = 0;
            while (n > 0) {
                int x = n % 10;
                sum += x * x;
                n /= 10;
            }
            int a = st.size();
            st.insert(sum);
            if (sum == 1)
                return 1;
            if (a == st.size())
                break;
            else {
                n = sum;
            }
        }
        return 0;
    }
};
int main()
{
    cout<<"world";
}