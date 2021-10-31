#include <bits/stdc++.h>
using namespace std;

void dfs(int g[][7], int start, int n)
{
    static int visited[7] = {0};
    if (visited[start] == 0)
    {
        cout << start << " ";
        visited[start] = 1;
        for (int j = 1; j < n; j++)
        {
            if (g[start][j] == 1 && visited[j] == 0)
                dfs(g, j, n);
        }
    }
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

    dfs(g, 4, 7);
    cout << "\n";

    return 0;
}