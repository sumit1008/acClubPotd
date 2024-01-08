#include<bits/stdc++.h>
using namespace std;
string removeOuterParentheses(string s) {
        string ans;
        
        int Count = 0;

        for (char c : s) {
            if (c == '(') {
                if (Count > 0) {
                    ans += c;
                }
                Count++;
            }
            else if (c == ')') {
                Count--;
                if (Count > 0) {
                    ans += c;
                }
            }
        }
        return ans;

    }
int main()
{
    cout<<"world";
}