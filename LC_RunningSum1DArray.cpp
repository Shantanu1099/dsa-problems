#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); ++i){
            nums[i] += nums[i-1];
        }  
        return nums;
    }
};

int main(){
	Solution S;
	vi n = {1, 2, 5, 7};
	S.runningSum(n);

	for (int i = 0; i < n.size(); ++i)
	{
		cout << n[i] << " " ;
	}

	return 0;
}