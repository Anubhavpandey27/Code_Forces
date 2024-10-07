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
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    if(n&1){
        cout<<"NO";
    }
    else{
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                a++;
            }
            else{
                b++;
            }


        }
        int a1=0;
        int b1=0;
        for(int i=0;i<n/2;i++){
            if(s[i]=='A'){
                a1++;
            }
            else{
                b1++;
            }

        }
        int i=0;
        int j=n/2 +1;
        pair<int,int> p={-1,-1};
        if(a1*2==a && b1*2==b){
            p.first=1;
            p.second=p.first +n/2;
        }
        if(p.first==-1){
            while(j<n && p.first==-1){
                if(s[j]=='A'){
                    a1++;
                }
                else{
                    b1++;
                }
                if(s[i]=='A'){
                    a1--;
                }
                else{
                    b1--;
                }
                if(a1*2==a && b1*2==b){
            p.first=i+2;
            p.second=j+1;
        }
        j++;
        i++;
            }
        }
        if(p.first==-1){
            cout<<"NO";
        }
        else{
            cout<<"YES"<<"\n";
            cout<<p.first<<" "<<p.second;
        }
        

    }
    }