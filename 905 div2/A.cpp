#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    long long n;
    long long k;
    string s;
    cin>>n>>k>>s;
    vector<long long> vec(26,0);
    for(int i=0;i<n;i++){
        vec[s[i]-'a']+=1;
    }
    long long od=0;
    for(int i=0;i<26;i++){
        if(vec[i]%2==1){
            od++;
        }
    }
    long long ans=k-od;
    
    if(ans==k || n==1){
        cout<<"YES"<<endl;
    }
    else if(ans>=-1){
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
     

}

}