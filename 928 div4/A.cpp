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
int a=0;
int b=0;
for(int i=0;i<5;i++){
    if(s[i]=='A'){
        a++;
    }
    if(s[i]=='B'){
        b++;
    }
    if(b==3){
        cout<<'B'<<"\n";
        break;
    }
    if(a==3){
        cout<<'A'<<"\n";
        break;
    }

}
 t--;}

}