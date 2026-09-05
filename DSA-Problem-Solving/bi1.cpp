#include <bits/stdc++.h>
using namespace std;

int countSecureRooms(int n, int m, vector<vector<int>>& gates) {
    vector<vector<int>> g(n), rg(n);

    for (auto &e : gates) {
        int u = e[0] - 1;
        int v = e[1] - 1;
        g[u].push_back(v);
        rg[v].push_back(u);
    }

    vector<int> vis(n, 0), order;

    function<void(int)> dfs1 = [&](int u) {
        vis[u] = 1;
        for (int v : g[u])
            if (!vis[v]) dfs1(v);
        order.push_back(u);
    };

    for (int i = 0; i < n; i++)
        if (!vis[i]) dfs1(i);

    reverse(order.begin(), order.end());

    vector<int> comp(n, -1);
    vector<int> sz;

    function<void(int,int)> dfs2 = [&](int u, int c) {
        comp[u] = c;
        sz[c]++;
        for (int v : rg[u])
            if (comp[v] == -1)
                dfs2(v, c);
    };

    int cnt = 0;
    for (int u : order) {
        if (comp[u] == -1) {
            sz.push_back(0);
            dfs2(u, cnt++);
        }
    }

    vector<int> out(cnt, 0);

    for (int u = 0; u < n; u++) {
        for (int v : g[u]) {
            if (comp[u] != comp[v])
                out[comp[u]]++;
        }
    }

    int sink = -1;

    for (int i = 0; i < cnt; i++) {
        if (out[i] == 0) {
            if (sink != -1)
                return 0;
            sink = i;
        }
    }

    if (sink == -1)
        return 0;

    return sz[sink];
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> gates(m, vector<int>(2));

    for (int i = 0; i < m; i++) {
        cin >> gates[i][0] >> gates[i][1];
    }

    int result = countSecureRooms(n, m, gates);
    cout << result << endl;

    return 0;
}