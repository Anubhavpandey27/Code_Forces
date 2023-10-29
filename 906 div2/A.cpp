#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
long long n;
set<long long> st;
vector<long long > vec;
cin>>n;
for(int i=0;i<n;i++){
    long long k;
    cin>>k;
    vec.emplace_back(k);
    st.insert(k);

}
if(st.size()>2){
    cout<<"NO"<<endl;
}
else if(st.size()==2){
    long long one=0;
    long long tw=0;
    for(int i=0;i<n;i++){
        if(vec[i]==*st.begin()){
            one++;
        }
        if(vec[i]==*++st.begin()){
            tw++;
        }

    }
    if(abs(one-tw)<=1){
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
}
else{cout<<"YES"<<endl;}

}

}