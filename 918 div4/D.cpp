#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
bool helper(char s){
    if(s=='a' || s=='e'){
        return true;
    }
    return false;
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
 ll n;
 cin>>n;
 string s;
 cin>>s;
 ll q;
if(helper(s[n-1])){
    q=2;
}
else{
    q=3;
}
int nxt=0;
for(int i=0;i<n-q;i++){
    if(helper(s[i])){
        if(!helper(s[i+2])){
            nxt=1;
            cout<<s[i];
        }
        else{
            cout<<s[i]<<'.';
        }
    }
    else{
        if(nxt==1){
            cout<<s[i]<<'.';
            nxt=0;
        }
        else{
            cout<<s[i];
        }
    }

}
for(int i=n-q;i<n;i++){
    cout<<s[i];
}
cout<<"\n";
}


}