#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
long long helper(long long x){
    long long ans=0;
    while(x>0){
        ans+=x%10;
        x=x/10;

    }
    return ans;
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){

long long x;
long long k;
cin>>x>>k;
long long ans;
while(true){
if(helper(x)%k==0){
    cout<<x<<endl;
    break;
}
x++;
}


}

}