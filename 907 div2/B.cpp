#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
long long helper(int a,int b){
    long long ans=1;
    for(int i=0;i<b;i++){
     ans*=a;
    }
    return ans;
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
long long n,q;
cin>>n>>q;
vector<long long> a,x;
vector<int> vec(31);

for(int i=0;i<n;i++){
    long long k;
    cin>>k;
    a.emplace_back(k);

}
set<long long> st;
for(int i=0;i<q;i++){
    long long k;
    cin>>k;
    if(vec[k]==0){
    x.push_back(k);
    vec[k]=1;
    }

}

long long mn=a[0];

for(int i=0;i<n;i++){
long long sm=0;
if(a[i]%2==0){
    for(int k=0;k<x.size();k++){
      if(a[i]%helper(2,x[k])==0){
        a[i]+=helper(2,x[k]-1);
      }
      
      

    }
    
}
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;


}

}