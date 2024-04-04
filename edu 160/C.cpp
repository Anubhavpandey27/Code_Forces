#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
int helper(int x){
    int ans=1;
    for(int i=1;i<=x;i++){
        ans*=2;

    }
    return ans;
}

int main(){
int t;
cin>>t;
vector<int> vec1(30,0);
int y=-1;

while(t){
     int a,b;
     cin>>a>>b;
     if(a==1){
        vec1[b]++;
         y=max(y,b);
     }
    
     else{
        vector<int> vec(30,0);
         int i=y;
         while(i>=0 && b>0){
            if(vec1[i]>vec[i]){
                int p=helper(i);
                if(p<=b){
                    int k=vec1[i]-vec[i];
                    int md=b/p;
                    b-=min(md,k)*p;
                   i--;
                    
                        
                    
                }
                else{i--;}
            }
            else{
                i--;
            }
         }
         if(b==0){
            cout<<"YES"<<"\n";
         }
         else{cout<<"NO"<<"\n";}
     }
     



 t--;}

}