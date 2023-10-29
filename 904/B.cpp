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
    long long n;
    cin>>n;
    
    string s;
    cin>>s;
    if(n==1){
    if(s[0]=='0'){
        cout<<0<<endl;
    }
    else{cout<<-1<<endl;}
        continue;}
    long long zero=0;
    vector<long long> vec(n,-1);
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
    if(s[i]=='0'){
        
        vec[zero]=i;
        zero++;
    }
    }
   
    
    vec[0]=vec[0]-0;
    long long k=1;
    for(int i=1;i<zero;i++){
      vec[i]=vec[i]-k+vec[i-1];
      k++;
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    
    cout<<endl;

}



}