#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0, mid = 0, end = nums.size() - 1;
        while(mid <= end) {
            if(nums[mid] == 0) {
                swap(nums[start++], nums[mid++]);
            }   
            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[end--]);
            }
        } 
    }
};
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution obj;
    obj.sortColors(nums);
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}