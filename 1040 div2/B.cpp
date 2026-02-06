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
    int n,s;
    cin>>n>>s;
    int z=0;
    int o=0;
    int tw=0;
    int sm=0;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        if(ele==0){
            z++;
        }
        else if (ele==1){
            sm++;
            o++;
        }
        else{
            sm+=2;
            tw++;
        }

    }
    vector<int> vec;
    for(int i=0;i<o;i++){
        vec.emplace_back(1);
    }
    for(int i=0;i<tw;i++){
        vec.emplace_back(2);
    }
    for(int i=0;i<z;i++){
        vec.emplace_back(0);
    }
    if(sm==s){
        cout<<-1;
    }
    else if(s-sm<=1){
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
    }
    else{
        cout<<-1;
    }
    cout<<"\n";

 t--;}

}