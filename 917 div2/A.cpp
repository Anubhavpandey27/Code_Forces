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
for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    ll ct=0;
    bool z=false;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        if(ele<0){
            ct++;

        }
        if(ele==0){
            z=true;
        }

    }
    if(z){
        cout<<0<<"\n";
    }
    else if(ct%2==0){
        cout<<1<<"\n";
        cout<<1<<" "<<0<<"\n";
    }
    else{
        cout<<0<<"\n";
    }

}

}