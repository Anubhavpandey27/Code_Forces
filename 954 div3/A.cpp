#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    vector<ll> vec;
    for(int i=0;i<3;i++){
        ll ele;
        cin>>ele;
        vec.emplace_back(ele);
    }
    sort(vec.begin(),vec.end());
    cout<<vec[2]-vec[0]<<"\n";

 t--;}

}