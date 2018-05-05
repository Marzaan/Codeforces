#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int sum=0,sum1=0;
    string s,s2;
    cin >> s;
    int x;
    cin >> x;
    for(int i=0;i<x;i++){
        cin >> s2;
        if(s2[0]==s[0] && s2[1]==s[1]){
            sum=1;
            sum1=1;
            break;
        }
        if(s2[1]==s[0]){
            sum=1;
        }
        if(s2[0]==s[1]){
            sum1=1;
        }
    }
    if(sum==1 && sum1==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
