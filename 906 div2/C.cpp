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

long long n;
string s;
cin>>n>>s;
string s1="01";
vector<int> vec;
int count =0;
bool ans=true;
for(int i=0;i<s.size()/2;i++){
    if(s[i]==s[s.size()-1-i]){
        if(s[i]=='1'){
            vec.emplace_back(i);
            s.insert(i,s1);
            
            count++;
        }
        else{
             vec.emplace_back(s.size()-i);
            s.insert(s.size()-i,s1);
           
            count++;
        }
    }
    if(count>300){
        ans=false;
        break;
    }
}
if(n%2==1){
    ans=false;
}
if(ans){
    cout<<count<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
else{
    cout<<-1<<endl;
}




}

}