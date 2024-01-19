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
int a=3;
int p=18;
a=p^a;
p=p^a;
a=a^p;
cout<<a<<" "<<p;


}