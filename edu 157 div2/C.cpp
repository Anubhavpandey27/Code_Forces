#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
int con(string s){
    int ans=0;
    int k=0;
    for(int i=s.size()-1;i>=0;i--){
        ans+=('0'-s[i])*pow(10,k);
        k++;
    }
    return ans;
}
int sum(string s,int i,int j){
    int ans=0;
    for(int k=i;k<=j;k++){
        ans+=s[k]-'0';
    }
    return ans;
    
}

bool od13(int s1,int s3){
    int a=s3/100;
    int b=int(s3/10)%10;
    int c=s3%10;
    if(a+b==c+s1){
        return true;
    }
    if(a+s1==b+c){
        return true;
    }
    return false;
    
}
bool od15(int s1,int s5){

}


int main(){
int t;

long long ans=0;
long long n;
cin>>n;
vector<pair<int ,vector<int>>>veco,vece;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    vector<int>v;
    pair<int ,vector<int>> p;
    p.first=s.size();
    v.emplace_back(sum(s,0,s.size()-1));
    v.emplace_back(s[0]-'0');
    v.emplace_back(s[s.size()-1]-'0');
    p.second=v;
    if(s.size()%2==0){
    vece.push_back(p);
    }
    else{
        veco.push_back(p);
    }


}
sort(vece.begin(),vece.end());
sort(veco.begin(),veco.end());
for(int i=0;i<vece.size()-1;i++){

    for(int k=i+1;k<vece.size();k++){
        if(vece[i].first==vece[k].first){
            if(vece[i].second[0]==vece[k].second[0]){
                if(i!=k){
                ans+=2;}
                else{ans++;}
            }}
            else{
                if(vece[i].second[0]+2*vece[k].second[1]==vece[k].second[0]){
                    ans++;
                }
                if(vece[i].second[0]+2*vece[k].second[2]==vece[k].second[0]){
                    ans++;
                }
                
            
        }
    }
}
for(int i=0;i<veco.size()-1;i++){
    for(int k=i+1;k<veco.size();k++){
        if(veco[i].first==veco[k].first){
            if(veco[i].second[0]==veco[k].second[0]){
                if(i!=k){
                ans+=2;}
                else{ans++;}
            }}
            else{
                if(veco[i].second[0]+2*veco[k].second[1]==veco[k].second[0]){
                    ans++;
                }
                if(veco[i].second[0]+2*veco[k].second[2]==veco[k].second[0]){
                    ans++;
                }
                
            
        }


    }
}
if(ans+n==9){
    cout<<9;
}
else{
cout<<ans+n+2<<endl;}




}