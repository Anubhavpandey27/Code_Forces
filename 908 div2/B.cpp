#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
long long t;
cin>>t;
for(int j=0;j<t;j++){
    long long n;
    cin>>n;
    vector<long long > vec;
    vector<long long > ans(n,1);
    vector<int> cot(101,0);
    int p=2;
    
    for(int i=0;i<n;i++){
        long long k;
        cin>>k;
        cot[k]+=1;
        if(cot[k]==2 && p<=3){
            ans[i]=p;
            p++;
        }
        vec.emplace_back(k);

    }
    if(p<4){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }


}

}