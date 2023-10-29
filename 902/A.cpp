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
long long sum=0;
for(int i=0;i<n-1;i++){
    int inp;
    cin>>inp;
    sum=sum+inp;
    }
    
    cout<<(-sum)<<endl;

}

}