#include<bits/stdc++.h>
using namespace std;
int k, flag=0;
multiset <int> total;
int grid[4][4];
void read(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>grid[i][j];
        }
    }
}

void solve(int i,int j, multiset <int> dmg){
    if(i==3 && j==3){
        flag=1;
        int sum=0,idx=0;
        dmg.insert(grid[3][3]);

        for(auto p=dmg.begin();p!=dmg.end();++p)
        {
            sum+=*p;
        }
        for(auto p= dmg.begin();idx<k;idx++,--p)sum-=*p;
        total.insert(sum);
    }
    else if(i>=4 || j >=4 || i<0 || j<0 || grid[i][j]==0){return;}
    dmg.insert(grid[i][j]);
    int temp= grid[i][j];
    grid[i][j]=0;
    solve(i+1,j,dmg); 
    solve(i,j+1,dmg);
    solve(i-1,j,dmg);
    solve(i,j-1,dmg);
    grid[i][j]=temp;
}

int main(){
    int t; cin>>t;
    while(t--){
    cin>>k;
    read();
    multiset <int> dmg;
    solve(0,0,dmg);
    int hp=-1;
    if(flag==1){
    auto val=total.end();
    hp=100+*(--val);
    if(hp>200)hp=200;
    }
    cout<<hp<<endl;
    }
    return 0;
}

