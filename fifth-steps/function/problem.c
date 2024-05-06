#include <stdio.h>
#include <stdbool.h>

#define MAXN 50

int graph[MAXN][MAXN];
bool visited[MAXN];

void dfs(int v, int n) {
    visited[v] = true;
    for (int u = 0; u < n; ++u) {
        if (!visited[u] && graph[v][u]) {
            dfs(u, n);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                scanf("%d", &graph[i][j]);
            }
        }

        int result = 0;
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                dfs(i, n);
                result += 2; // Minimum 2 invitations needed per connected component
            }
        }

        printf("%d\n", result);
    }

    return 0;
}
