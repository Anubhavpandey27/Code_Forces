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
int n;
cin>>n;
int ct=0;
bool q=true;
int ct2=0;
bool br=true;
for(int  i=0;i<n;i++){
    for(int j=0;j<n;j++){
        char a;
        cin>>a;
        if(br){
        if(a=='1' && q){
           ct++;
        }
        else if(a=='1'){
            ct2++;
        }
        }
    }
    if (br){
        
    if(ct>0){
        q=false;
    }
    if(ct>0 && ct2>0){
        if(ct==ct2){
            cout<<"SQUARE"<<"\n";
            br=false;
        }
        else{
            cout<<"TRIANGLE"<<"\n";
            br=false;
        }
    }
    }
}
 t--;}

}