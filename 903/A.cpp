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
int n,m;
string x,s;

bool ans=false;
int di=0;
cin>>n>>m>>x>>s;
 while(x.find(s)==string::npos){
        di++;
        x=x+x;
        
        if(x.length()>120){
            di=-1;
            break;
        }
    }
    
    cout<<di<<endl;

   
    }


}