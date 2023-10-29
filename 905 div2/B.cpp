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
    long long k;
    cin>>n>>k;
    long long indi=0;
    long long sum=k-1;
    long long tw=0;
    for(int i=0;i<n;i++){
        long long element;
        cin>>element;
        if(element%2==0){
            tw++;
        }
        
        if(element%k==0){
            sum=0;
            indi=1;
            
        }
        
        else{
            sum=min(k-element%k,sum);
            
        }
    }
    if(k==4 ){
        if( tw>=2){
          cout<<0<<endl;
        }
        else if(indi){
        cout<<0<<endl;
    }
        else{
            cout<<min(sum,2-tw)<<endl;
        }
        
    }
    else if(indi){
        cout<<0<<endl;
    }
    else{
    cout<<sum<<endl;}
   

}

}