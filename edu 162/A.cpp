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
int f=n;
bool fs=true;
int ct=0;
vector<int> vec;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    vec.emplace_back(ele);
    if(ele==1){
        ct++;
        if(fs){
        f=i;
        fs=false;
    }
    }
    
    
}
int temp=0;
int i=f;
while(ct){
    if(vec[i]==0){
        temp++;
    }
    else{
        ct--;
    }
    i++;

}
cout<<temp<<"\n";
 t--;}

}