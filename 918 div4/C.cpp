#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
bool helper(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root 
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    ll sum=0;
    
    for(int i=0;i<n;i++){
         ll ele;
         cin>>ele;
         sum+=ele;
    }
    bool ans=helper(sum);
    
    if(ans){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }


}

}