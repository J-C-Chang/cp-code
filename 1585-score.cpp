#include<bits/stdc++.h>
using namespace std;

int main(){	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		string str;
		cin>>str;
		int ans=0 , n=1;
		for(auto i:str){
			if(i=='X') n=1;
			else{
				ans+=n;
				n++;
			}
		}
		cout<<ans<<"\n";
	}
}
