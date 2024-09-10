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

// S
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> fromBegin(n);
        fromBegin[0]=1;
        vector<int> fromLast(n);
        fromLast[0]=1;
        
        for(int i=1;i<n;i++){
            fromBegin[i]=fromBegin[i-1]*nums[i-1];
            // cout << fromBegin[i] << " fromBegin: " << i << endl;
            fromLast[i]=fromLast[i-1]*nums[n-i];
            // cout << fromLast[i] << " fromLast: " << i  << endl;
        }
        
        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[i]=fromBegin[i]*fromLast[n-1-i];
            // cout << res[i] << " res: " << i << endl;
        }
        return res;
    }
};

int main() {
	Solution sol_obj;
	vi nums = { 1, 2, 3, 4};
	vi ans = sol_obj.productExceptSelf(nums);
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
}