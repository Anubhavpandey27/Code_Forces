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
void helper(){
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int it=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            it=i;
            break;
        }

    }
    if(it==-1){
        cout<<n<<"\n";
    }
    else{
        int z=-1;
        for(int i=it+1;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                z=i; 
                break;
            }

        }
        if(z==-1){
            z=n-1;
        }
        reverse(s.begin()+it,s.begin()+z+1);
        int ans=n;
        char pre='0';
        for(int i=0;i<n;i++){
            if(s[i]!=pre){
                ans++;
            }
            pre=s[i];

        }
        cout<<ans<<"\n";
        
    }

 t--;}

}