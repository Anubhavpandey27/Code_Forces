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
multiset<pair<long long,long long>> ml,lm;

for(int j=0;j<t;j++){
char s;
long long l,r;
cin>>s>>l>>r;
if(s=='+'){
pair<long long,long long>p;
p.first=l;
p.second=r;
ml.insert(p);
p.first=r;
p.second=l;
lm.insert(p);
}
if(s=='-'){
pair<long long,long long>p;
p.first=l;
p.second=r;
ml.erase(ml.find(p));
p.first=r;
p.second=l;
lm.erase(lm.find(p));
}
if(ml.size()<=1){
cout<<"NO"<<endl;
}
else{
  pair<long long,long long>k= *--ml.end();
  long long last_beg=k.first;
  
  k=*lm.begin();
  long long first_end=k.first;
  if(last_beg-first_end>0){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}

}

}