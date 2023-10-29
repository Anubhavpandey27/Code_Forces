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
long long p;
cin>>n>>p;
vector<pair<long long ,long long>> vec;
for(int i=0;i<n;i++){
    pair<long long,long long>p;
    long long inp;
    cin>>inp;
    p.second=inp;
    vec.push_back(p);
}
for(int i=0;i<n;i++){
    
    long long inp;
    cin>>inp;
    vec[i].first=inp;

}
sort(vec.begin(),vec.end());
long long sum=p;
n=n-1;
int i=0;
while(vec[i].first<p && n>0){
    int sub=min(n,vec[i].second);
    sum=sum+sub*vec[i].first;
    n-=sub;
    i++;


}
sum=sum+p*n;
cout<<sum<<endl;

}

}