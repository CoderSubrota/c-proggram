#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 200001

// Structure to represent a node in the tree
typedef struct Node
{
    int value;
    struct Node *next;
} Node;

// Function to initialize a new node
Node *createNode(int value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

// Function to add an edge to the tree
void addEdge(Node *graph[], int u, int v)
{
    Node *node1 = createNode(v);
    node1->next = graph[u];
    graph[u] = node1;

    Node *node2 = createNode(u);
    node2->next = graph[v];
    graph[v] = node2;
}

// DFS function to find the winner of the game
void dfs(Node *graph[], int u, int parent, int *visited, int *winner)
{
    visited[u] = 1;
    Node *curr = graph[u];
    int childCount = 0;

    // Iterate through the neighbors of the current node
    while (curr != NULL)
    {
        int v = curr->value;
        if (!visited[v])
        {
            childCount++;
            dfs(graph, v, u, visited, winner);
        }
        curr = curr->next;
    }

    // If the current node is a leaf node, determine the winner based on the number of children
    if (parent != -1 && childCount == 0)
    {
        *winner = (*winner == 1) ? 2 : 1;
    }
}

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    Node *graph[MAX_NODES] = {NULL};

    // Read the tree edges
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(graph, u, v);
    }

    // Read the starting nodes for each round
    int startingNodes[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &startingNodes[i]);
    }

    // Determine the winner for each round
    for (int i = 0; i < t; i++)
    {
        int visited[MAX_NODES] = {0};
        int winner = 1; // Assume Ron wins initially
        dfs(graph, startingNodes[i], -1, visited, &winner);

        if (winner == 1)
        {
            printf("Ron\n");
        }
        else
        {
            printf("Hermione\n");
        }
    }

    return 0;
}
