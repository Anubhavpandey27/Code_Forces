#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}
long long find_set(long long n,vector<long long > &vec){
  if(vec[n]==n){
    return n;
  }
  return vec[n]=find_set(vec[n],vec);
}
void union_sets(long  a, long b,vector<long long >& vec) {
    a = find_set(a,vec);
    b = find_set(b,vec);
    if (a != b)
        vec[b] = a;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    ll n;
    cin>>n;
    
    for(int i=0;i<n;i++){

    }

 t--;}

}