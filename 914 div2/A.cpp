#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
#define ll long long
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    ll a,b,xk,yk,xq,yq;
    cin>>a>>b;
    cin>>xk>>yk>>xq>>yq;
    vector<pair<int,int>> king={make_pair(xk-a,yk-b),make_pair(xk-a,yk+b),make_pair(xk+a,yk-b),make_pair(xk+a,yk+b),make_pair(xk-b,yk+a),make_pair(xk-b,yk-a),make_pair(xk+b,yk+a),make_pair(xk+b,yk-a)};
    yk=yq;
    xk=xq;
    vector<pair<int,int>> queen={make_pair(xk-a,yk-b),make_pair(xk-a,yk+b),make_pair(xk+a,yk-b),make_pair(xk+a,yk+b),make_pair(xk-b,yk+a),make_pair(xk-b,yk-a),make_pair(xk+b,yk+a),make_pair(xk+b,yk-a)};
    int ans=0;
    set<pair<int,int>>st;
    for(int i=0;i<8;i++){
        for(int k=0;k<8;k++){
            if(king[i].first==queen[k].first && king[i].second==queen[k].second){
                
                st.insert(king[i]);
                break;
            }
        }

    }
    cout<<st.size()<<endl;

}

}