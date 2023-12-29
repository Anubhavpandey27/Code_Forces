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
int t;
cin>>t;
for(int j=0;j<t;j++){
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            char ele;
            cin>>ele;
            if(ele=='A'){
                a++;
            }
            if(ele=='B'){
                b++;
            }
            if(ele=='C'){
                c++;
            }
        }
    }
    if(a==2){
        cout<<'A'<<"\n";
    }
    if(b==2){
        cout<<'B'<<"\n";
    }
    if(c==2){
        cout<<'C'<<"\n";
    }


}

}