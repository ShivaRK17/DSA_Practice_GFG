#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> v, int s)
{
    queue<int> q;
    vector<bool> vis(v.size(), 0);
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int curr = q.front();
        cout << curr << " ";
        q.pop();
        for (int i = 0; i < v[curr].size(); i++)
        {
            if (!vis[v[curr][i]])
            {
                q.push(v[curr][i]);
                vis[v[curr][i]] = true;
            }
        }
    }
}
void bfs2(vector<vector<int>> v){
    queue<int> q;
    vector<bool> vis(v.size(), 0);
    for (int i = 0; i < vis.size(); i++){
        if (vis[i] == false){
            int s = i;
            q.push(s);
            vis[s] = true;
            while (!q.empty())
            {
                int curr = q.front();
                cout << curr << " ";
                q.pop();
                for (int i = 0; i < v[curr].size(); i++)
                {
                    if (!vis[v[curr][i]])
                    {
                        q.push(v[curr][i]);
                        vis[v[curr][i]] = true;
                    }
                }
            }
        }
    }
}

int main()
{
    vector<vector<int>> v = {
        {1, 2},
        {0, 2, 3},
        {0, 1, 3, 4},
        {1, 2, 4},
        {2, 3}};
    // bfs(v, 3);
    bfs2(v);

    return 0;
}