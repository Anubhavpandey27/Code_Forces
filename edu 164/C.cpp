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
string x,y;
cin>>x>>y;
int i=0;
int mx=10;
bool diff=true;
while(diff && i<x.size()){
if(x[i]>y[i]){
    mx=1;
    diff=false;
    
}
else if(x[i]<y[i]){
    
    mx=2;
    diff=false;
    
}
i++;
}
if(mx==10){
    cout<<x<<"\n";
    cout<<y<<"\n";
}
else{
    for(int j=i;j<x.size();j++){
        if(mx==1){
            if(x[j]>y[j]){
                char temp=x[j];
                x[j]=y[j];
                y[j]=temp;
            }
        }
        else if(mx==2) {
            if(x[j]<y[j]){
                char temp=x[j];
                x[j]=y[j];
                y[j]=temp;
            }
        }
    }
    cout<<x<<"\n";
    cout<<y<<"\n";
}




 t--;}

}