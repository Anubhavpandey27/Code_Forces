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
int n,k;
cin>>n>>k;
if(n==k){
    for(int i=1;i<=n;i++){
        cout<<1<<" ";
    }
}
else if (k==1){
     for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
else{
    cout<<-1<<" ";
}
cout<<"\n";
 t--;}

}