#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <set>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    ll n,m,k;
    cin>>n>>m>>k;
    set<int> a,b;
    for(int i=0;i<n;i++){
        int a1;
        cin>>a1;
        if(a1<=k){
        a.insert(a1);  
        }  
    }
    for(int i=0;i<m;i++){
        int a1;
        cin>>a1;
        if(a1<=k){
        b.insert(a1);  
        }  
    }
    int a1=0;
    int a2=0;
    if(a.size()<k/2 || b.size()<k/2){
        cout<<"NO"<<"\n";
    }
    else{
    auto aa=a.begin();
    auto bb=b.begin();
    for(int i=1;i<=k;i++){
        if(*aa!=i && *bb!=i){
               
        }


    }
    }

 t--;}

}