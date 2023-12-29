#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
#include <valarray>
#define ll long long
void helper(vector<char> vec,set<vector<char>> &st){
    
    if(vec.size()==1){
        st.insert({vec[0]});
        return;
    }
    if(vec.size()==2){
        st.insert({vec[0]});
        st.insert({vec[1]});
        return;
    }
    else{
        if(vec[0]==vec[1]){
        vec.erase(vec.begin());
        st.insert(vec);
        helper(vec,st);
        vec.clear();

        }
        else{
        vector<char> vec1=vec;
        vec.erase(vec.begin());
        st.insert(vec);
        vec1.erase(vec1.begin()+1);
        st.insert(vec1);
        helper(vec1,st);
        helper(vec,st);
        vec.clear();
        vec1.clear();
        return;
        }
    }
    
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> vec;
    set<char>st;
    for(int i=0;i<n;i++){
        vec.push_back(s[i]);
    } 
    ll ans=0;
    
    if(n>=2){
        for(int i=0;i<n;i++){
        st.insert(s[i]);
        ans+=st.size();
    }
    cout<<ans<<"\n";
    }
    else if (n==1){
        cout<<1<<"\n";
    }
    


}

}