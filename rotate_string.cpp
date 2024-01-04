#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return 0;
        s+=s;
        if(s.find(goal) != string::npos){
            return 1;
        }
        return 0;
    }
};
int main()
{
    cout<<"world";
}