#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
//#include <ext/pb_ds/assoc_container.hpp> #include <ext/pb_ds/tree_policy.hpp> using namespace __gnu_pbds; #define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
bool helper(int a1,int b1,int a2,int b2,vector<vector<int>>&vec){
            for(int i=0;i<26;i++){
                if(vec[b1+1][i]-vec[a1][i]!=vec[b2+1][i]-vec[a1][i]){
                    return false;
                }
            }
            return true;

}

vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    string s;
    cin>>s;
    int n=s.size();
    vector<vector<int>> vec(n+1,vector<int>(26,0));
    for(int i=0;i<n;i++){
        vec[i+1][s[i]-'a']++;
    }
    if(n&1){
        set<int>st;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-1-i]){
               
            }
            else{
                st.insert(i);
            }  
        }
        int ans=0;
        if(st.size()<=1){
            cout<<st.size()<<"\n";
            t--;
            continue;
        }
        int a=0;
        a=*st.begin();
        auto it=st.end();
        it--;
        int b=*it;
        if(helper(a,b,n-1-a,n-1-b,vec)){
            cout<<(b-a+1)<<"\n";
            t--;
            continue;
        }
        vector<int> v1,v2;
        int md=n/2+1;
        
        for(int i=0;i<26;i++){
            v1.emplace_back(vec[md][i]-vec[a][i]);
        }
        for(int i=0;i<26;i++){
            v2.emplace_back(vec[n-1-a][i]-vec[md][i]);
        }
         ans=-1;
        for(int i=n/2;i<=n;i++){
            int check=0;
            for(int j=0;j<26;j++){
                if(v1[j]<v2[j]){
                    break;
                }
                if((v1[j]-v2[j])%2!=0){
                    check++;
                }
                if(check>=2){
                    break;
                }
                if(j==25){
                    ans=i;
                    break;
                }

            }
            if(ans!=-1){
                ans=(ans-a);
                break;
            }
            v1[s[i]-'a']++;
            v2[s[i]-'a']--;
        }
        cout<<ans<<"\n";
        

    }
    else{
        set<int>st;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-1-i]){
               
            }
            else{
                st.insert(i);
            }  
        }
        int ans=0;
        if(st.size()<=1){
            cout<<st.size()<<"\n";
            t--;
            continue;
        }
        int a=0;
        a=*st.begin();
        auto it=st.end();
        it--;
        int b=*it;
        if(helper(a,b,n-1-a,n-1-b,vec)){
            cout<<(b-a+1)<<"\n";
            t--;
            continue;
        }
        vector<int> v1,v2;
        int md=n/2+1;
        
        for(int i=0;i<26;i++){
            v1.emplace_back(vec[md][i]-vec[a][i]);
        }
        for(int i=0;i<26;i++){
            v2.emplace_back(vec[n-1-a][i]-vec[md][i]);
        }
        ans=0;
        for(int i=n/2;i<=n+1;i++){
            for(int j=0;j<26;j++){
                if(v1[j]<v2[j] || (v1[j]-v2[j])%2!=0){
                    break;
                }
                if(j==25){
                    ans=i;
                    break;
                }

            }
            if(ans!=0){
                ans=(ans+1-a);
                break;
            }
            if(i==n+1){
                break;
            }
            v1[s[i]-'a']++;
            v2[s[i]-'a']--;
        }
        cout<<ans<<"\n";
        

    }

 t--;}

}