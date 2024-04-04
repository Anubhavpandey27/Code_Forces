#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
#define ll long long
void helper(){
}

int main(){
int t;
cin>>t;
while(t){
    long long x,n;
    cin>>x>>n;
    vector<ll> vec;
    set<int> st;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
           st.insert(i);
           st.insert(x/i);
        }
    }
    if(n==x){
        cout<<1<<"\n";
    }
    else if(n==1){
        cout<<x<<"\n";
    }
    else{
  
   
      auto ans=st.lower_bound(x/n);
      if(*ans*n>x){
        ans--;
      }
        
        
        cout<<*ans<<"\n";
    }
    

    

 t--;}

}