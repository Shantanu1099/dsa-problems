#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

void iterMap(map<int, int> mm){
	cout << "Size: " << mm.size() << endl; 
	for(auto &k_v : mm){ // Accesing n element in a map and printing them orderly takes O(nlog(n))
	cout << k_v.first << " " << k_v.second << endl;
}
}
int main(){ 
// While initialising strings as keys the T.C. increases to O(s.size()*log(n)) while insertion b'coz of the self/lexiographical sorting technique of Red-Black Trees in the keys part....That's why it is an ordered 'map'...

// IN case of  'unordered_map <int, string> mmm;'  Everything is same except -> Inbuilt Implementation which is Hashmap.. and because Hashmap is used so Insertion and Accessement T.C. -> turns O(1) & keys datatypes -> Cannot use complex datatypes such as Containers must use int, float, long long, double these already defined fixed size Datatypes....


// The major difference of 'multimap<int, string> mmmm;' when compared to maps is that it can store multiple similar value of key... The concept of Unique Key isn't available here..        You can do the same thing using map as well like.... map<int, vector<string> > mmod;

// map<int , string > mm;
// mm[1] = "LALALAL";
// mm[2];
// for(auto &k_v : mm){
// 	cout << k_v.first << " " << k_v.second << endl;
// }


map< int, int> m;   // Can put any Container inside the < > thing... keys rae unique..i.e. There can'r be same key for multiple values...Cannot store more than 1 value...& that will be the latest Assigned value
m[1] = 67;
m[5] = 432;
m[4] = 2323;
m.insert({3, 222}); //inserting pair....
m[3]; // Inserting a key as well takes a time of (O(log n)) & so does Accessing it.

auto it = m.find(8);  // O(log(n))

if( it != m.end()){   // Gives Segmentation Fault when Any value at or beyond m.end() is Accessed
m.erase(it); // O(log(n))
}

if(it == m.end()) cout << "NOT FOUND" << endl;

else  cout << "FOUND: " << it->first << " " << it->second << endl; 

// m.clear(); //clears all pairs in maps
iterMap(m);




// Below are three ( 3 ) ways of writing Iterating statement, choose what you like most

// map<int, int> :: iterator it;
// for( it = m.begin() ; it != m.end(); ++it){
// 	cout << it->first << " " << it->second <<endl;
// }

// for(pair<int , int> pp: m){
// 	cout << pp.first << " " << pp.second << endl;  
// }

// for(auto &pr: m){ // (O(nlogn)) coz we are accessing n elements n = 5 ;}

// 	cout << pr.first << " " << pr.second << endl;  
// }
// cout << m[1] << endl << m[5] <<	endl << m[4] << endl;

	return 0;
}