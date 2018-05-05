#include<bits/stdc++.h>
#include<string>
using namespace std;
char x[100];
bool ex(char a[],int k){
		int j,flg=0;
		if(k>0){
            for(j=k-1;j>=0;j--){
                if(a[k]==a[j]){
                    flg=1;
                    break;
                }
            }
		}
		if(flg==0){
			return true;
		}
		else{
            return false;
		}
}
int main()
{
    int i,sum=0;
    cin >> x;
    for(i=0;i<strlen(x);i++){
        if(ex(x,i)){
            sum=sum+1;
        }
    }
    cout << sum;
    if(sum%2==0){
        cout << "Chat with her";
    }
    else{
        cout << "Ignore him";
    }

}
