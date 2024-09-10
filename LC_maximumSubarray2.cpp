#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int >
#define vvi vector<vector <int >>
#define mpii map<int, int>
#define umpii unordered_map<int, int>
#define pb push_back
#define pob pop_back
#define forip for(int i = 0; i < n; ++i){cin >> arr[i]};
#define forop for(int i = 0; i < n; ++i){cout << arr[i]};
// Always remember Overflow

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum < 1) sum = 0;
        }
    return maxSum;
    }
};

int main() {
    Solution sol_obj;
    vi nums = { -2,1,-3,4,-1,2,1,-5,4 };
    int maxSum = sol_obj.maxSubArray(nums);
    cout << "Max Sum in Subarray : " << maxSum;
}