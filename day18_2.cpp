#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int ans = 0, n;
    bool can(string answerKey, int size, int k) {
        int T = 0, F = 0;
        bool OK = false;
        for (int i = 0; i < size; ++i) {
            T += (answerKey[i] == 'T');
            F += (answerKey[i] == 'F');
        }

        if (min(T, F) <= k) {
            ans = max(ans, size);
            OK = true;
        }
            

        for (int i = size; i < n; ++i) {
            T -= (answerKey[i - size] == 'T');
            F -= (answerKey[i - size] == 'F');

            T += (answerKey[i] == 'T');
            F += (answerKey[i] == 'F');

            if (min(T, F) <= k) {
                ans = max(ans, size);
                OK = true;
            }
        }

        return OK;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        n= answerKey.size();
        int l = 0, r = answerKey.size();
        while (l <= r) {
            int mid = (l + r) / 2;

            if (can(answerKey, mid, k))
                l = mid + 1;
            else
                r = mid - 1;
        }

        return ans;
    }

    
};
int main()
{
    cout<<"world";
}