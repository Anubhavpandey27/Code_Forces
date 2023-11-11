#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
long long n;
cin>>n;
n=2*n;
vector<pair<long long ,long long >>cor;
vector<long long > vec;
for(int i=0;i<n;i++){
    long long k ;
    cin>>k;
    vec.emplace_back(k);
}
sort(vec.begin(),vec.end());
long long ans=0;
long long st=0;
long long ed=n-1;
while(ed>st){
    pair<long long,long long > p;
    p.first=vec[st];
    p.second=vec[ed];
    cor.push_back(p);
    st++;
    ed--;
}
for(int i=0;i<cor.size()-1;i++){
    ans+=abs(cor[i].first-cor[i+1].first);
    ans+=abs(cor[i].second-cor[i+1].second);
}

cout<<ans<<endl;
for(int i=cor.size()-1;i>=0;i--){
    cout<<cor[i].first<<" "<<cor[i].second<<endl;
}


}

}