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
int n;
cin>>n;
int x=1;
int y=2;
int z=4;
if(n<7){
    cout<<"NO"<<endl;
}
else if(n==7){
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;
}
else{
    int val=n-7;
    if(val%3==2){
        y=val+y;
    }
    else{
        z+=val;
    }
    if(x==y || y==z || x==z){
        cout<<"NO"<<endl;
    }
    else{
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;}
}

}

}