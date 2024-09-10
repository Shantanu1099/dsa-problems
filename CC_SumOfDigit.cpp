#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
int main(){
	
int t; cin>>t;
while(t--){
	lli num; cin>>num;
	lli sum = 0;
	while(num>0){
	sum += num%10;
	num /= 10;
	}
	cout<<sum<<endl;
}
	return 0;
}