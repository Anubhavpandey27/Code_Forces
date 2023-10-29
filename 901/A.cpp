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
for(int j=0;j<t;j++){
long long a,b,n,ans;
cin>>a>>b>>n;
ans=0;
vector<int> arr;
for(int i=0;i<n;i++){

int k;
cin>>k;

arr.emplace_back(k);
}

sort(arr.begin(), arr.end());

for (int i=0;i<n;i++) {
 ans += (b-1);
b = 1;
 b += arr[i];
if (b> a) {b = a;}
        }

        ans += min(b, a);
        cout << ans << endl;
   
}






}