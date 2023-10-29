#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
long long helper(vector<pair<long long ,long long>> vec,long long n,int a,int b){
    vector<pair<long long,long long>> ans;
    ans.push_back(vec[0]);
for(int i=1;i<vec.size();i++){
    if(i!=a && i!=b){
    if(vec[i].first==ans[ans.size()-1].first){
           ans[ans.size()-1].second=vec[i].second;
    }
    else{
        if(vec[i].first<=ans[ans.size()-1].second){
            ans[ans.size()-1].second=max(ans[ans.size()-1].second,vec[i].second);

        }
        else{
            ans.push_back(vec[i]);
        }
    }}

}
long long sub=0;
if(vec.size()==2){
    return n;
}
for(int i=0;i<ans.size();i++){
sub+=(ans[i].second-ans[i].first+1);
}

return n-sub;

}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
long long n,m,k;
cin>>n>>m>>k;
vector<pair<long long,long long> > rain;
for(int i=0;i<m;i++){
    long long l,r;
    cin>>l>>r;
    pair<long long ,long long> p;
    p.first=l;
    p.second=r;
    rain.push_back(p);
}
sort(rain.begin(),rain.end());
long long an=0;
for(int i=0;i<m-1;i++){
    for(int k=i+1;k<m;k++){
        an=max(an,helper(rain,n,i,k));
    }
}
cout<<an<<endl;


}

}