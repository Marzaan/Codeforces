#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,sum=0,sum1=0;
    cin >> x;
    string s,s1;
    cin >> s;
    s1=s.replace("&ab","ba");
    for(int i=0;i<x;i++){
        if(s[i]=='0'){
            sum++;
        }
        else if(s[i]=='1'){
            sum1++;
        }
    }
    if(sum>=sum1){
        cout << sum-sum1 << endl;
    }
    else if(sum<sum1){
        cout << sum1-sum << endl;
    }
    return 0;
}
