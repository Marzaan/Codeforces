#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    char ch[220];
    char c[220];
    cin >> ch;
    int sum=0;
		for(int i=0,j=0;i<strlen(ch);i++){
			if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B'){
				i=i+2;
				sum=1;
			}
			else if(sum==1 && j>0){
				c[j]=ch[i];
				cout << " ";
				cout << c[j];
				j++;
				sum=0;
			}
			else{
				c[j]=ch[i];
				cout << c[j];
				j++;
				sum=0;
			}
		}

    return 0;
}
