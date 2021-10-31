#include <bits/stdc++.h>
using namespace std;

void bfs(int g[][7], int start, int n)
{
    int i = start;
    cout << i << " ";

    int visited[7] = {0};
    visited[i] = 1;
    queue<int> q;
    q.push(i);

    while (!q.empty())
    {
        i = q.front();
        q.pop();
        for (int j = 1; j < n; j++)
        {
            if (g[i][j] == 1 && visited[j] == 0)
            {
                cout << j << " ";
                visited[j] = 1;
                q.push(j);
            }
        }
    };
}

int main()
{
    int g[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};

    bfs(g, 5, 7);
    cout << "\n";

    return 0;
}