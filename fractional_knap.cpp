#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
double fractionalKnapsack(int w, Item arr[], int n) {
        vector<int> vl;
        vector<int> wg;
        for (int i = 0; i < n; i++) {
            vl.push_back(arr[i].value);
            wg.push_back(arr[i].weight);
        }

        vector<pair<double, int>> ratio;

        for (int i = 0; i < n; i++) {
            ratio.push_back(make_pair((double)vl[i] / wg[i], i));
        }

        sort(ratio.begin(), ratio.end(), greater<pair<double, int>>());

        double ans = 0;
        int cur = 0;

        for (int i = 0; i < n; i++) {
            int index = ratio[i].second;
            if (cur + wg[index] <= w) {
                ans += vl[index];
               cur += wg[index];
           } else {
                double fraction = (double)(w - cur) / wg[index];
                ans += fraction * vl[index];
                break;
            }
        }

    return ans;
}
int main()
{
    cout<<"world";
}