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
    vector<int> vec1,vec2;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec1.emplace_back(ele);
    }
    int on=0;
    int z=0;
     for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        if(ele==1){
            if(vec1[i]==0){
                on++;
            }
        }
        else{
            if(vec1[i]==1){
                z++;

            }
        }
    }
    cout<<max(on,z)<<"\n";
    


 t--;}

}