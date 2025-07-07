#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;
int n, m;
vector <int> adj[MAX_N];
bool vis[MAX_N];

void dfs(int v) {
    vis[v] = true;
    for (int i: adj[v])
        if (!vis[i]) {
            dfs(i);
        }
}

int main() {
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[--u].push_back(--v);
        adj[v].push_back(u);
    }
    dfs(0);
}