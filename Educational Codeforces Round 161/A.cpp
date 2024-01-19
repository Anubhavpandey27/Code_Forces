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
int t;
cin>>t;
while(t){
    ll n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    bool ans=false;
    for(int i=0;i<n;i++){
        if(c[i]!=b[i] && c[i]!=a[i]){
            ans=true;
            break;
        }

    }
    if(ans){
        cout<<"YES"<<"\n";
    }
    else{
         cout<<"NO"<<"\n";
    }

 t--;}

}