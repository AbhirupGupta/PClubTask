#include<bits/stdc++.h>
using namespace std;
int k;
multiset <int> total;
int grid[5][5];
void read(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>grid[i][j];
        }
    }
}

void solve(int i,int j, multiset <int> dmg){
    if(i==4 && j==4){
        int sum=0,idx=0;
        dmg.insert(grid[4][4]);
        for(auto p=dmg.begin();p!=dmg.end();++p){sum+=*p;}
        for(auto p= --dmg.end();idx<k;idx++,--p)sum-=*p;
        total.insert(sum);
    }
    else if(i>=5 || j >= 5){return;}
    dmg.insert(grid[i][j]);
    solve(i+1,j,dmg);
    solve(i,j+1,dmg);
}

int main(){
    cin>>k;
    read();
    multiset <int> dmg;
    solve(0,0,dmg);
    auto val=total.begin();
    cout<<*val;
    return 0;
}

