#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph1[N];

bool vis[N];

void dfs(int vertex) {
	if(vis[vertex]) return;
	vis[vertex] = true;
	for(auto& child : graph1[vertex]) {
		cout << "Parent " << vertex << " child " << child << endl;
		// another condition insted of if(vis[vertex]) return; could be if child is visited then continue;
		dfs(child);
	}
}

int main() {
	int vertex, edges;
	cin >> vertex >> edges;
	for(int i = 0; i < edges; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		graph1[v1].push_back(v2);
		graph1[v2].push_back(v1);
	}
	// dfs(1);
	int ct = 0;
	for(int i = 1; i <= vertex ; i++) {
		// cout << " i = " << i << " vis[i] " << vis[i] << endl;
		if(vis[i]) continue;
		dfs(i);
		ct++;
	}
	cout << ct << endl;
	return 0;
}