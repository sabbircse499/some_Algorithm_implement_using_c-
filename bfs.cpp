#include <stdio.h>

int queue[100];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (front == -1 && rear == -1) {
        front++;
        rear++;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

int dequeue() {
    if (front > rear) {
        return -1111111111; // Placeholder for an empty queue
    } else {
        front++;
        return queue[front - 1];
    }
}

void bfs(int graph[100][100], int n, int startVertex) {
    int visited[100] = {0}; // Array to keep track of visited vertices
    enqueue(startVertex);
    visited[startVertex] = 1;

    while (front <= rear) {
        int currentVertex = dequeue();
        printf("%d ", currentVertex);

        for (int i = 0; i < n; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int graph[100][100];
    int n;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter 1 if there is an edge between X and Y vertex otherwise enter 0. \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Edge between %d and %d: ", i, j);
            scanf("%d", &graph[i][j]);
        }
    }
    printf("\n");

    printf("Enter the starting vertex for BFS: ");
    int startVertex;
    scanf("%d", &startVertex);

    printf("BFS traversal starting from vertex %d: ", startVertex);
    bfs(graph, n, startVertex);

    return 0;
}
