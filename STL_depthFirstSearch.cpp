#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph1[N];
bool vis[N];


// //4 sections in dfs to write code
// //every section has a definition
// void dfs(int vertex){
//     /* Take action on vertex after entering the vertex */
//     //if(vis[vertex]) return; //this can be written if inside for we haven't written vis child condn
//     cout<<vertex<<"\n";
//     vis[vertex] = true;
//     for(int child:g[vertex]){
//         cout<<"parent"<<vertex<<" ,child"<<child<<"\n";
//         if(vis[child]) continue;
//         /* Take action on child before entering the child node */
//         dfs(child);
//         /* Take action on child after existing the child node */
//     }
//     /* Take action on child before existing the vertex */
// }


void dfs(int vertex) {
	if(vis[vertex]) return;
	vis[vertex] = true;
	for(auto& child: graph1[vertex]) {
		if(vis[child]) continue;
		cout << "Parent - " << vertex << " - child - " << child << endl;
		dfs(child);
	}
}

int main() {
	int vertex , edges;
	cin >> vertex >> edges;
	for(int i = 0; i < edges; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		cout << v1 << " _ " << v2 << endl;
		graph1[v1].push_back(v2);
		graph1[v2].push_back(v1);
	}
	dfs(3);
}
