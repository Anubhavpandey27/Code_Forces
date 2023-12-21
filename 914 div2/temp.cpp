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
    vector<ll>a,b;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        a.emplace_back(ele);
    }
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        b.emplace_back(ele);
    }

      ll f=1;
      for(ll i=0;i<n;i++)
      {
        if(a[i]<b[i]) {f=0; break;}
      }     

      if(f) cout<<"YES"<<endl;
      else
      {
        ll maxi=b[0];
        for(ll i=1;i<n;i++)
        {
            maxi=max(maxi,b[i]);
            if(a[i]<maxi) 
            {
                f=0;
                break;
            }
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

}

}
}
