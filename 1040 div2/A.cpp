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
    int sum=0;
int one=0;
int z=0;
    for(int i=0;i<n;i++){
        int ele;
    cin>>ele;
    if(ele==0){
        z++;
    }
    else if (ele==1){
        one ++;
    }
    else{
        sum+=ele;
    }

    }
    sum+=(min(one,z)*2);
 sum+=(max(0,one-z));
  sum+=(max(0,z-one));
 cout<<sum<<"\n";
    

 t--;}
 

}
