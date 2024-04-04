#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
        int n;
        cin>>n;
        bool ans=false;
        for(int i=1;i<=n;i++){
            int ele;
            cin>>ele;
            if(i==1){
                if(ele==1){
                    ans=true;
                }
            }
            
        }
        if(ans){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
 t--;}

}