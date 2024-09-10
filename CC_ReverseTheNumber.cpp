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
		int n; cin>>n;
		int sum = 0;
		int num = 0;
		while(n%10>0 || n/10>0){
			num=n%10;
			sum+=num;
			n/=10;
			sum*=10;
		}
		cout<<sum/10<<endl;
	}	

	return 0;
}