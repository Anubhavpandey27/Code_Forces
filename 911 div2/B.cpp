#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
bool helper(vector<long long>vec,int i){
   
if(i==0){
    vec[i]+=min(vec[1],vec[2]);
    vec[2]-=min(vec[1],vec[2]);
    vec[1]-=min(vec[1],vec[2]);
    while(true){
        if(vec[0]==0 && vec[1]==0 && vec[2]!=0){
            return false;
            
        }
        if(vec[0]==0 && vec[2]==0 && vec[1]!=0){
            return false;
        }
        if(vec[1]==0 && vec[2]==0 && vec[i]!=0){
            return true;
            break;
        }
        if(vec[1]==1 && vec[2]==1 && vec[2]==1){
            return true;
        }
        if(vec[0]==0){
            vec[0]+=min(vec[1],vec[2]);
            vec[2]-=min(vec[1],vec[2]);
            vec[1]-min(vec[1],vec[2]);
        }
        if(vec[1]==0){
            vec[1]+=min(vec[0],vec[2]);
            vec[2]-=min(vec[0],vec[2]);
            vec[0]-min(vec[0],vec[2]);

        }
        if(vec[2]==0){
            vec[2]+=min(vec[0],vec[1]);
            vec[1]-=min(vec[0],vec[1]);
            vec[0]-min(vec[0],vec[1]);

        }
    }
}
return true;
}


int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
long long a,b,c;
cin>>a>>b>>c;
vector<long long > vec;
vec.push_back(a);
vec.push_back(b);
vec.push_back(c);

int a1,b1,c1;
a1=0;
b1=0;
c1=0;

if (abs(b-c) % 2 ==0){
    a1=1;
} 
if (abs(a-c) % 2 ==0){
    b1=1;
} 
if (abs(b-a) % 2 ==0){
    c1=1;
} 
cout<<a1<<" "<<b1<<" "<<c1<<endl;




}

}