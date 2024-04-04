#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long

bool helper(int n){
    if(n==2){
        return 2;
    }
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
        return false;   
      }
    }
    return true;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n=8;
if(helper(n)){
    cout<<"prime";
}
else{
    
    cout<<"composite";
}

}