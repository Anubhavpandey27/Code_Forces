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
    ll n;
    cin>>n;
    ll pre=0;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        pre=((pre/ele)+1)*ele;

    }
    cout<<pre<<"\n";

 t--;}

}