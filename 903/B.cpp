#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
bool helper(vector<long long> vec){
    for(int i=0;i<vec.size()-1;i++){
       if(vec[i]!=vec[i+1]){
        return false;
       }
    }
    return true;
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    long long a,b,c;
    cin>>a>>b>>c;
    bool ans=false;
    vector<long long >vec;
    vec.emplace_back(a);
    vec.emplace_back(b);
    vec.emplace_back(c);
    if(a==b && b==c){
        ans=true;
    }
   else{ 
    
    for(int i=0;i<3;i++){
    sort(vec.begin(),vec.end());
    long long mn=vec[0];
    long long mx=vec[vec.size()-1];
    vec.pop_back();
    vec.emplace_back(mn);
    vec.emplace_back(mx-mn);
    if(helper(vec)){
        ans=true;
        break;
    }
    }

    
   }
   if(ans){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}

}