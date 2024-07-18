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
int time=1;
while(n>0){
n--;
if(n==0){
    break;
}
time=time+k;
}
cout<<time<<"\n";
 t--;}

}