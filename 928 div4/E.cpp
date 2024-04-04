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
    ll i=1;
    ll n,k;
    cin>>n>>k;
    while(true){
        ll ref=n/2+(n&1);
        if(k<=ref){
            cout<<i*(2*k-1)<<"\n";
            break;
        }
        
            else{
                k-=ref;
                n/=2;
                i*=2;
            }
        }
         t--;

    }


}