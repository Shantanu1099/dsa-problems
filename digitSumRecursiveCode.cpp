#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
int digit_sum(int);

int main(){
	int n; cin>>n;
	cout<<digit_sum(n)<<endl;

	return 0;
}

int digit_sum(int n){
	if(n==0){
		return 0;
	}
	return (n % 10) + digit_sum(n/10);
}