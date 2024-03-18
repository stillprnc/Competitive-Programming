const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
void bfsGrid(vector<vector<ll>> vv, ll r, ll c, ll x, ll y)
{
    vector<ll> resV;
    queue<pair<ll, ll>> q;
    vector<vector<ll>> vis(r, vector<ll>(c, 0));

    q.push({x, y});
    resV.push_back(vv[x][y]);
    vis[x][y]=1;

    while (!(q.empty()))
    {
        pair<ll, ll> p = q.front(); q.pop();
        ll x = p.first;
        ll y = p.second; 

        for(int i=0; i<4; i++)
        {
            ll newX = x+dx[i];
            ll newY = y+dy[i];
            if(newX >= 0 && newX < r && newY >= 0 && newY < c)
            {
                if(vis[newX][newY]==0)
                {
                    resV.push_back(vv[newX][newY]);
                    q.push({newX,newY});
                    vis[newX][newY]=1;
                }
            }
        }
    }

    for(auto it : resV)
    cout<< it << " "; cout<<el;
}