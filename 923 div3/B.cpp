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
    vector<ll> vec;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        vec.emplace_back(ele);

    }
    vector<char> ans;
    vector<ll> ct(26,-2);
    ct[0]=vec[n-1];
    ans.push_back('a');
    for(int i=n-2;i>=0;i--){
        int id=-1;
        for(int j=0;j<26;j++){
            if(ct[j]==vec[i]+1){
                id=j;
                break;
            }

        }
        if(id!=-1){
            ct[id]--;
            ans.push_back(char('a'+id));
        }
        else{
            
            for(int j=0;j<26;j++){
                if(ct[j]==-2){
                    ct[j]=vec[i];
                    ans.push_back(char('a'+j));
                    break;
                }
            }
        }
    }

    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<"\n";

 t--;}

}