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
        ll n,k;
        cin>>n>>k;
        int i=0;
        int tot=n;
        int ans=0;
        bool fs=true;
        while(k>0){
            if(fs){
                k-=n;
                fs=false;
                ans++;
            }
            else{
                k-=n-i;
                ans++;
                if(k>0){
                     k-=n-i;
                ans++;
                }
            }
            i++;
        }
        cout<<ans<<"\n";
 t--;}

}