#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}

int main(){
ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int ii=0;ii<t;ii++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        n=s.size();
        if(s[0]==s[n-1] || n==1){
            cout<<0<<endl;
            continue;
        }
        else if(n==2){
            cout<<1<<"\n";
        }
        else{
            int left=0;
            int right=n-1;
            string temp=s;
            while(s[left]!=s[right]){
                s.push_back('0');
                right++;
                left++;
            }
            int ans1=left;
            left=0;
            right=n-1;
            reverse(temp.begin(), temp.end());
            // cout<<temp<<endl;
            while(temp[left]!=temp[right]){
                temp.push_back('0');
                right++;
                left++;
                // cout<<left<<" "<<right<<" "<<temp<<endl;
            }
            cout<<min(left, ans1)<<endl;
        }
    }
    return 0 ;

}