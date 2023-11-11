#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
long long neg=0;

long long t,k;
cin>>t>>k;
vector<vector<long long>>vec(t,{0});
for(int j=0;j<t;j++){
long long ele;
cin>>ele;
vec[j].push_back(ele);
}
for(int j=0;j<t;j++){
long long ele;
cin>>ele;
vec[j].push_back(ele);
vec[j][0]=vec[j][1]-vec[j][2];
if(vec[j][0]<=0){
    neg++;
}

}
long long it=max(neg,k);
long long sm=0;
sort(vec.begin(),vec.end());
for(int i=0;i<it;i++){
   sm+=vec[i][1];
}
for(int i=it;i<t;i++){
    sm+=vec[i][2];
}
cout<<sm;


}