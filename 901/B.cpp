#include <iostream>
using namespace std;
#include<set>
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
long long n,m,k;
cin>>n>>m>>k;
long long sum1=0;
multiset<int>a,b;

for(int i=0;i<n;i++){
    int z;
    cin>>z;
    sum1+=z;
    a.insert(z);
}
for(int i=0;i<m;i++){
    int z;
    cin>>z;
    
    b.insert(z);
}
int temp;


for(int i=1;i<=k;i++){
 if(i&1==1){
    if(*a.begin()<*b.end()){
        auto rem=a.begin();
        auto ad=b.end();
        temp=*a.begin();
         sum1-=temp;
         sum1+=*b.end();
         a.erase(rem);
        a.insert(*b.end());
        b.erase(ad);
        b.insert(temp);
    }
 }
 else if(i&1==0){
    if(*b.begin()<*a.end()){
        auto ab=b.begin();
        auto aa=a.end();
        temp=*b.begin();
         sum1+=temp;
         sum1-=*a.end();
        
         b.erase(*ab);
        b.insert(*a.end());
        a.erase(*aa);
        a.insert(temp);
    }

 }
}
cout<<sum1<<endl;



}

}