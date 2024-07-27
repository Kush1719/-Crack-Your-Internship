#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        int mini=INT_MAX;
        for(int i=0;i<=n-m;i++) {
            int k=a[i+m-1]-a[i];
            mini=min(mini,k);
        }
        return mini;
    }   
};
int main() {
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++) {
        cin>>a[i];
    }
    long long m;
    cin>>m;
    Solution obj;
    cout<<obj.findMinDiff(a,n,m);
    return 0;
}