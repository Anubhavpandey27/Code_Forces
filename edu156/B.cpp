#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
 long double helper(int a1,int a2,int b1,int b2){
    return sqrt((b2-a2)*(b2-a2)+(a1-b1)*(a1-b1));
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
int p1,p2,a1,a2,b1,b2;
cin>>p1>>p2>>a1>>a2>>b1>>b2;
long double w;
if(p1==0 && p2==0){
    cout<<0<<endl;
}
else{
//case1
w=max(helper(a1,a2,p1,p2),helper(a1,a2,0,0));
w=min(w,max(helper(b1,b2,p1,p2),helper(b1,b2,0,0)));
w=min(max(max(helper(a1,a2,0,0),helper(b1,b2,p1,p2)),helper(a1,a2,b1,b2)/2),w);
w=min(w,max(max(helper(a1,a2,p1,p2),helper(b1,b2,0,0)),helper(a1,a2,b1,b2)/2));
cout<<w<<endl;}
}

}