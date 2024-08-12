#include<bits/stdc++.h>
#include<fstream>
using namespace std;
#define Row 1001
#define Col 1001

int n,m,u,v,s,t;
char a[Row][Col];
bool visited[Row][Col];
int d[Row][Col];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

// Bài 1
#if 0
bool dfs(int i, int j)
{
        if(a[i][j] == 'B')
            return true;
        a[i][j] = 'x';
        for (int k = 0; k < 4; k++)
        {
            int i1 = i + dx[k];
            int j1 = j + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != 'x')
                if(dfs(i1,j1))
                    return true;
        }
        return false;
}

bool bfs(int i, int j)
{
    queue<pair<int,int>> q;
    q.push({i,j});
    a[i][j] = 'x';
    while (!q.empty())  
    {
        pair<int,int> top = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != 'x')
            {
                if(a[i1][j1] == 'B')
                    return true;

                q.push({i1,j1});
                a[i1][j1] = 'x';
            }
        }
        
    }
    return false; 
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'A')
            {
                s = i; 
                t = j;
            }
                
            else if(a[i][j] == 'B')
            {
                u = i; 
                v == j;
            }       
        }
    }
    memset(visited, false, sizeof(visited));
    bfs(s,t);
    if(!d[u][v])
        cout << "Trackless\n";
    else
        cout << d[u][v] << endl;
}
#endif

// Bài 2
#if 0
void bfs(int i, int j)
{
    queue<pair<int,int>> q;
    q.push({i,j});
    a[i][j] = 'x';
    d[i][j] = 0;
    while (!q.empty())  
    {
        pair<int,int> top = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != 'x')
            {
                d[i1][j1] = d[top.first][top.second] + 1;
                if(a[i1][j1] == 'B')
                    return;
                q.push({i1,j1});
                a[i1][j1] = 'x';
            }
        } 
    }
}

int main()
{
    ifstream infile("E:\\Project Visual Studio Code\\Summary_exercises\\Test\\INPUT.INP");
    infile >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            infile >> a[i][j];
            if(a[i][j] == 'A')
            {
                s = i; 
                t = j;
            }
                
            else if(a[i][j] == 'B')
            {
                u = i; 
                v == j;
            }
                
        }
    }
    memset(visited, false, sizeof(visited));
    bfs(s,t);
    if(!d[u][v])
        cout << "Trackless\n";
    else
        cout << d[u][v] << endl;
}
#endif
