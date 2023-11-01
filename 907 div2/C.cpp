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
long long sm=0;
for(int j=0;j<t;j++){
long long n;
vector<long long > vec;
cin>>n;
for(int i=0;i<n;i++){
    long long k;
    cin>>k;
    sm+=k;
    vec.emplace_back(k);

}
sort(vec.begin(),vec.end());
long long atk=0;
long long i=0;
long long k=n-1;
long long x=0;
while(i<k){
if(vec[i]<=vec[k]-x){
atk+=vec[i];
i++;
x+=vec[i];
}
else{
    vec[i]-=(vec[k]-x);
    atk+=(vec[k]-x+1);
    k--;
    x=0;}}
    cout<<x<< endl;
if(vec[i]==vec[k]!=0){
    long long ls=vec[k];
    if(x<=ls){
    
   if((ls-x)%2==0){
    atk=atk+(ls-x)/2;}
   else{atk=(atk+ls-x+1)/2;}}
   else{
    atk+=ls;
   }
   }
    cout<<atk<<endl;
}





}