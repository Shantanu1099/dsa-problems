#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;++i){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;++i){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
int main(){
int n; cin>>n;
int arr[n];
int min;
int swp;
forinput
for(int i = 0; i < n; ++i){
	min = i;
	for(int j = i+1; j < n; ++j){
		if(arr[j] < arr[min]) min = j;
	}
	swp = arr[i];
	arr[i] = arr[min];
	arr[min] = swp;
}
foroutput

	return 0;
}