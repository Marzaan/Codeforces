#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,sum0=0,sum1=0;
    cin >> x;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            sum0++;
        }
        else if(s[i]=='1'){
            sum1++;
        }
    }
    if(sum0==sum1){
        cout << s.size() << endl;
    }
    else if(sum0==0 || sum1==0){
        cout << "0" << endl;
    }
}
