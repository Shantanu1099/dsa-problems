#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
#define mpis map<int, string>
#define uns unordered_set
#define unm unordered_map
#define ms multiset
// Always Remember Overflow

// void dispPair(pair <int, int > p){

// 	cout << p.first << " " << p.second << endl;
	
// }


int main(){

// Stack - LIFO || FILO  - > CAn use any Data Structure inside stack 
// stack<pair<int, int> >s;

// stack <int> s;
// s.push(343);
// s.push(23);
// s.push(232);
// s.push(2311);
// s.push({2316, 992992});
// s.push({22213, 92939239});  Pair example

// while(!s.empty()){    //loop while stack is not empty
// FOr pair
	// dispPair(s.top());
	// s.pop();

// 	cout << s.top().first << " " << s.top().second << endl;
// 	s.pop();
// }



// Queue
	queue<string > q;
	q.push("LEMEE");
	q.push("ELEMENTS");
	q.push("LOL");
	q.push("LMAO");
	while(!q.empty()){
		cout << q.size() << endl;
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}