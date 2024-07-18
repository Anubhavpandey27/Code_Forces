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
int n,m,k;
cin>>n>>m>>k;
int comp=(n+m-1)/m;
if(comp+k<n){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
 t--;}

}