#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int sum=0;
    char j[100];
    char k[100];
    cin >> j >> k;
    for(int i=0;i<strlen(j);i++){
        if(tolower(j[i])==tolower(k[i])){
            sum=0;
            continue;
        }
        else if(tolower(j[i])>tolower(k[i])){
            sum=1;
            break;
        }
        else if(tolower(j[i])<tolower(k[i])){
            sum=2;
            break;
        }
    }
    if(sum==0){
        cout << 0;
    }
    else if(sum==1){
        cout << 1;
    }
    else if(sum==2){
        cout << -1;
    }
}
