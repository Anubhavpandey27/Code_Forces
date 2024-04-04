#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<map>
#define ll long long
void helper(){
}

int main(){
int t;
cin>>t;
while(t){

    ll n,k,m;
    cin>>n>>k>>m;
    string s;
    map<char,int> mp;
    cin>>s;
    vector<char> vec;
    for(auto ele :s){
        if(k>ele-'a'){
            vec.emplace_back(ele);
        }
    }
    if(vec.size()==0){
        cout<<"NO"<<"\n";
        for(int i=0;i<n;i++){
            cout<<'a';
        }
        cout<<"\n";
        t--;
        continue;
    }
    string ans;
    int count=0;
    for(int i=0;i<vec.size();i++){
          mp[vec[i]]++;
          if(mp.size()==k){
            ans.push_back(vec[i]);
            count++;
            mp.clear();
          }
    }
    if(count>=n){
        cout<<"Yes"<<"\n";
        t--;
        continue;
    }
    if(mp.size()==0){
        while(ans.size()<n){
            ans.push_back(vec[vec.size()-1]);
        }
        cout<<"NO"<<"\n";
        cout<<ans<<"\n";
        t--;
        continue;
    }
    char temp;
    for(char c='a';c<char(97+k);++c){
        if(mp[c]==0){
            temp=c;
            break;
        }
    }
    while(ans.size()<n){
        ans.push_back(temp);
    }
    cout<<"NO"<<"\n";
    cout<<ans<<"\n";


 t--;}

}