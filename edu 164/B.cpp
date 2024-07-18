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
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
int n;
cin>>n;

set<int> mn;
int nm;
vector<int> vec;
vector<int> temp={0};
set<int> bs;
for(int i=0;i<n;i++){
    
    int ele;
    cin>>ele;
    if(i==0){
        nm=ele;
    }
    if(ele==nm){
        
    }
    else{
        temp.emplace_back(i);
        
    }
    bs.insert(ele);
    
}
temp.emplace_back(n-1);

int ans=-1;
if(bs.size()!=1){
    ans=temp[1];
}
int prev=temp[1];
for(int i=2;i<temp.size()-1;i++){
ans=min(temp[i]-prev-1,ans);
prev=temp[i];
}
ans=min(ans,n-1-temp[temp.size()-2]);
cout<<ans<<"\n";




 t--;}

}