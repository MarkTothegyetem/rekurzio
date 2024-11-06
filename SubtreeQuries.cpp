#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 2e5 + 1;

int N, Q, a, b, t, s, timer;
int inTime[maxN], outTime[maxN];
ll k[maxN], fenwickTree[2 * maxN];
vector<int> graph[maxN];

void update(int idx, ll val) {
    for (int i = idx; i < 2 * maxN; i += i & -i)
        fenwickTree[i] += val;
}


ll query(int idx) {
    ll sum = 0;
    for (int i = idx; i > 0; i -= i & -i)
        sum += fenwickTree[i];
    return sum;
}


void dfs(int node, int parent = 0) {
    inTime[node] = ++timer;
    for (int neighbor : graph[node]) {
        if (neighbor != parent)
            dfs(neighbor, node);
    }
    outTime[node] = ++timer;
}

int main() {
    
    scanf("%d %d", &N, &Q);
    for (int i = 1; i <= N; i++) {
        scanf("%lld", &k[i]);
    }

    
    for (int i = 0; i < N - 1; i++) {
        scanf("%d %d", &a, &b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    
    timer = 0;
    dfs(1);

   
    for (int i = 1; i <= N; i++) {
        update(outTime[i], k[i]);
    }

    
    for (int q = 0; q < Q; q++) {
        scanf("%d %d", &t, &s);
        if (t == 1) { 
            update(outTime[s], -k[s]); 
            scanf("%lld", &k[s]);  
            update(outTime[s], k[s]);  
        }
        else if (t == 2) { 
            printf("%lld\n", query(outTime[s]) - query(inTime[s]));
        }
    }

    return 0;
}
