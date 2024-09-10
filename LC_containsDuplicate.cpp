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

// Optimised Approach T.C. -> O(N) , S.C. -> O(N)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    bool isAvail = false;
    unordered_map <int, int> mp;
    for (int i = 0 ; i < nums.size() ; i++){
        mp[nums[i]]++;
    }
    for(auto & k_v : mp){
        if(k_v.second > 1){
            isAvail = true;
        }
    }
    return isAvail;
    }
};



// Brute Force  T.C. -> O(N^2)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    bool isAvail = false;
    for (int i = 0 ; i < nums.size() ; i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] == nums [j]) isAvail = true;
        }
    }
    return isAvail;
    }
};


int main(){
    Solution sol_obj;
    vi nums = {1,1,1,3,3,4,3,2,4,2};
    bool isAvail = sol_obj.containsDuplicate(nums);
    cout << (isAvail == 1 ? "true" : "false")  << endl;
}