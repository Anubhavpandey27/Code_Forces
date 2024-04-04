#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int str=1e3;
    int ed=-1;
    ll n;
    int ct=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            str=min(i,str);
            ed=max(i,ed);
            ct++;
        }
    }
    if(ct==0){
        cout<<0<<"\n";
    }
    else if(ct==1){
        cout<<1<<"\n";
    }
    else{
        cout<<ed-str+1<<"\n";
    }

 t--;}

}