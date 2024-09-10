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


// Brute Force T.C. = O(n^2)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = INT_MIN;
        // int minimum = INT_MAX;
        int size = prices.size();
        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                int diff = prices[j] - prices[i];
                if(diff && diff > profit){
                    profit = diff;
                } 
            }
        }
        return profit;
    }
};


// Optimised Solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minimum = INT_MAX;
        int size = prices.size();
        for(int i = 0; i < size; i++){
            minimum = min(minimum , prices[i]);
            profit = max(profit , prices[i] - minimum);
        }
        return profit;
    }
};




int main(){
	Solution sol_obj;
	vi prices = {7,1,5,3,6,4};
	int i = sol_obj.maxProfit(prices);
	cout << i << endl;
}