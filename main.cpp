#include<bits/stdc++.h>
using namespace std;

int main() {
    int j1=0,i1=0,j=0,i=0,n=5,m[5][5];
    for(i;i<n;i++){
        for(j=0;j<n;j++){
            cin>>m[i][j];
            if(m[i][j]==1){
                j1=j;
                i1=i;
            }
        }
    }
    cout<<abs(i1-2)+abs(j1-2);

}
