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
vector<long long> a,b;
for(int j=0;j<t;j++){
    long long k;
    cin>>k;
    a.emplace_back(k);


}
int m;
cin>>m;

for(int j=0;j<m;j++){
    long long k;
    cin>>k;
    b.emplace_back(k);


}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
cout<<a[t-1]<< " "<<b[m-1];

}