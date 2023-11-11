#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(vector<long long > vec,long long n){
    vector<bool> v(n+1,0);
    for(int i=0;i<n;i++){
    long long a=vec[i];
    if(i+a<=a-1){
        v[a-1-i-a]=true;

    }
    else{
        v[n-i-1]=true;
    }
    }
    
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){


}

}