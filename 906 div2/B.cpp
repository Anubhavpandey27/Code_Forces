#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
bool helper(string s){
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
long long n,m;
string s,p;
cin>>n>>m>>s>>p;
bool ans =true;
bool hel=true;
if(helper(p)){
    char f=p[0];
    char l=p[m-1];
    if(f!=l){
       hel=false;
       

    }
    
    for(int i=0;i<n-1;i++){
         if(s[i]==s[i+1]){
            if(hel){
            if(f!=s[i]){

            }
            else{
                ans=false;
                break;
            }
                }
                else{ans=false;
                break;}
            }
        }
    
}
else{
    if(helper(s)){
        ans=true;
    }
    else{ans=false;}
}
if(ans){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}










}

}