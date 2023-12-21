#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
bool helper(vector<long long > vec){
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i+1]<vec[i]){
            return false;
        }
    }
    return true;
}
bool helper1(vector<long long > vec){
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i+1]>vec[i]){
            return false;
        }
    }
    return true;
}
int ld(vector<long long > vec){
    int mn=101;
    int temp=1;
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]>vec[i+1]){
            temp++;
        }
        if(vec[i]<=vec[i+1]){
            mn=min(mn,temp);
            temp=1;
        }


    }
    mn=min(mn,temp);
    return mn;


}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    int n;
    int k;
    cin>>n>>k;
    vector<long long> vec;
    for(int i=0;i<n;i++){
    long long element;
    cin>>element;
    vec.emplace_back(element);

    }
    int mn=ld(vec);
    if( k<=1){
        if(helper(vec)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
      
        else{
            cout<<"YES"<<endl;
        }
        
    

}

}