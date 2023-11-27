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
cin>>n;
string s;
cin>>s;
long long ans=0;
int count =0;
long long ans2=0;
for(int i=0;i<n;i++){
if(s[i]=='.' ){
    count++;
}
else if(s[i]=='#'){
    if(count>=3){
        ans2=2;
    }
    if(count==1){
    ans++;
    }
    else if(count>=2){
        ans+=2;
    }
    count=0;
}

}
 if(count>=3){
        ans2=2;
    }
if(count==1){
ans++;
}
    else if(count>=2){
        ans+=2;
    }
if(ans2==2){
    cout<<2<<endl;
}
else{
cout<<ans<<endl;
}


}

}   