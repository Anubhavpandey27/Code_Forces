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
    string s;
    cin>>s;
    bool ans=false;
    for(int i=0;i<s.size()-1;i++){
if(s[i]=='i' && s[i+1]=='t'){
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