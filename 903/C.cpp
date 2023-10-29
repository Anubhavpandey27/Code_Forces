#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
int helper(vector<char> vec){
    vector<int> v(4);
    int occ;
    for(int i=0;i<vec.size();i++){
         occ=0;
        for(int j=0;j<vec.size();j++){
            if(vec[i]==vec[j]){
                occ++;
            }
        }
        v[i]=occ;
    }
    sort(v.begin(),v.end());
    return 4-v[3];

}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
vector<vector<char>> vec;
int n;
int ans=0;
cin>>n;
for(int i=0;i<n;i++){
string s;
cin>>s;
vector<char> v;
for(int k=0;k<n;k++){
    v.push_back(s[k]);
}
vec.push_back(v);
}
for(int i=0;i<n;i++){
    for(int k=0;k<n;k++){
        char a=vec[i][k];
        char b=vec[n-1-k][i];
        ans=ans+abs(int(a)-int(b));
    }
}
cout<<ans<<endl;

}

}