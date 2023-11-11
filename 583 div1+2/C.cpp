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
string s;
cin>>s;
int op=0;
int cl=0;
bool ans=true;
for(int i=0;i<t;i++){
    if(s[i]==')'){
        cl++;
    }
    else{
        op++;
    }
    if(cl-op>1){
        ans=false;
    }

}
if(op!=cl){
    ans=false;
}
if(ans){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


}