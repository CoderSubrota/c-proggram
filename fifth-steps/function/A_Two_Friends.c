#include <stdio.h>
#include <stdbool.h>

#define MAXN 55

int graph[MAXN];
bool visited[MAXN];

void dfs(int v) {
    visited[v] = true;
    if (!visited[graph[v]]) {
        dfs(graph[v]);
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; ++i) {
            scanf("%d", &graph[i]);
        }

        int result = 0;
        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                dfs(i);
                result += 2; // Minimum 2 invitations needed per connected component
            }
        }

        printf("%d\n", result);
    }

    return 0;
}
