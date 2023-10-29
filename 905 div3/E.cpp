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
long long fis;
long long count=0;
cin>>fis;
long long fac;
for(int i=1;i<n;i++){
    long long k;
    cin>>k;
    if(k<fis){
 fac=ceil(log2(fis/k));
        cout<<fac<<endl;
        k=k*pow(2,fac);
        count+=fac;

    }
    else{
       
       
    }



    fis=k;
}
cout<<count<<endl;
}

}