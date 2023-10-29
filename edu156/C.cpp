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
long long n;
cin>>s>>n;
string s1=s;
char c='z';
while(s1.size()>0){
    
    for(int i=0;i<s1.size();i++){
        if(s1[i]==c){
            s1.erase(s1.begin()+i);
            s=s+s1;
            i--;

        }
    }
    c--;
    
}
cout<<s[n-1];
}}  