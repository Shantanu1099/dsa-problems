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
int arr[n];
lli pro = 1;
for(int i = 0 ; i < n; i++){
cin>>arr[i];
pro *= arr[i];
}
if(pro%10==2||pro%10==3||pro%10==5){
	cout<<"YES"<<endl;
}
else{
	cout<<"NO"<<endl;
}
}

	return 0;
}