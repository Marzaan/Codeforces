#include<bits/stdc++.h>
using namespace std;
int main ()
{
        int x;
        cin >> x;
		int sum=0,sum2=0;
		char ch[201];
		for(int i=0;i<x;i++){
			cin >> ch[i];
		}
		for(int i=0;i<x;i++){
			if(ch[i]=='S' && ch[i+1]=='F'){
				sum++;
			}
			if(ch[i]=='F' && ch[i+1]=='S'){
				sum2++;
			}
		}
		if(sum>sum2){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		return 0;
}
