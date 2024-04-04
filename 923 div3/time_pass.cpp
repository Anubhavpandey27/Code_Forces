#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}

int main() {
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;

	    vector<pair<int,int>>vec(n+1,{-1,-1});
	    for(int i=0;i<2*n;i++){
	        int ele;
	        cin>>ele;
	        if(vec[ele].first==-1){
	            vec[ele].first=i;
	            vec[ele].second =ele;
	        }
	        else{
	            vec[ele].first=i-vec[ele].first;
	        }
	    }
	    sort(vec.begin(),vec.end());
	    for(int i=n;i>0;i--){
	        cout<<vec[i].second<<" ";
	    }
	    cout<<"\n";
	    t--;
	}

}