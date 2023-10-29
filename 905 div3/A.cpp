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

string s;
cin>>s;

long long ans=4;
char fi=s[0];
if(s[0]=='0'){
    fi=':';
}
ans+=abs(fi-'1');
for(int i=0;i<3;i++){
    char a=s[i];
    char b=s[i+1];
    if(s[i]=='0'){
         a=':';
    }
    if(s[i+1]=='0'){
        b=':';
    }
    ans+=abs(a-b);
}
cout<<ans<<endl;
}

}