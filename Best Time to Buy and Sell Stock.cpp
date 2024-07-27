#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int max = -1;
        for(int i=prices.size()-1;i>=0;i--) {
            if(prices[i] > max) {
                max = prices[i];
                continue;
            }
            int profit = max - prices[i];
            maxi = maxi < profit ? profit : maxi;
        }
        return maxi;
    }
};
int main() {
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++) {
        cin>>prices[i];
    }
    Solution obj;
    cout<<obj.maxProfit(prices);
    return 0;
}