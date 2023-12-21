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
ll t;
cin>>t;
for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    string ele;
    cin>>ele;
    vector<int>vec(26,0);
    ll ans=0;
    for(int i=0;i<n;i++){
        vec[ele[i]-'A']+=1;
    }
    for(int i=0;i<26;i++){
        if(vec[i]>=i+1){
            ans++;
        }
    }
    cout<<ans<<endl;


}

}