#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
int k;
int t;
vector<char> vec;
cin>>t>>k;
string s;
cin>>s;
int op=k/2;
int cl=k/2;
string ans="";
for(int j=0;j<t;j++){
    if(s[j]=='('){
        if(op>0){
         vec.push_back('(');
         op--;
        }
    }
    else{
        if(cl>0 && cl-op>0){
         vec.push_back(')');
         cl--;
        }
    }
    if(cl==0 && op==0){
        break;
    }


}   
for(int i=0;i<k;i++){
    cout<<vec[i];
}

}

