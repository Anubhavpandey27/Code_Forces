#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <set>
#define ll long long
void helper(vector<int> vec,vector<int> &st,int &sm,int i,int &ct){
    if(st[sm]==0){
        ct++;
        st[sm]=1;
    }
    

        if(i>=vec.size()){
return;
        }
        sm+=vec[i];
        helper(vec,st,sm,i+1,ct);
        sm-=vec[i];
        helper(vec,st,sm,i+1,ct);


}
void subs(vector<int> vec,set<vector<int>> &c,int &sm,int i,int k,vector<int>&test){
          
           if(sm>k){
            return;
           }
           if(sm==k){
            c.insert(test);
            return ;
           }
            if(i>=vec.size()){
            return;
           }
           sm+=vec[i];
           test.emplace_back(vec[i]);
           subs(vec,c,sm,i+1,k,test);
           test.pop_back();
           sm-=vec[i];
           subs(vec,c,sm,i+1,k,test);


}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t,k;

vector<int> vec;
int ct=0;
cin>>t>>k;

while(t){
int ele;
cin>>ele;
if(ele<=k){
vec.emplace_back(ele);
}


 t--;}
 vector<int> tle(k+1,0);
 set<vector<int>> st;
 vector<vector<int>> c;
 int sm=0;
 vector<int> test;
 subs(vec,st,sm,0,k,test);
 sm=0;
 for(auto x:st){
    helper(x,tle,sm,0,ct);
 }
 cout<<ct<<"\n";
 for(int i=0;i<=k;i++){
    if(tle[i]==1){
        cout<<i<<" ";
    }
 }

}





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

 t--;}

}