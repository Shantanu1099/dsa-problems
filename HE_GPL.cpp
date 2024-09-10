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

lli t; cin>>t;
while(t--){
lli n; cin>>n;
string s; cin>>s;
lli res = 0;
lli power = 1;
for (int i = n-1 ; i >= 0 ; --i)
{
	int digit = s[i] - '0';
	res += digit * power;
	power*=2;
}
cout<<res<<endl;
}
	
	return 0;
}