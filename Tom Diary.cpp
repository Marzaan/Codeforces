#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum;
    cin >> x;
    string s[105];
    for(int i=0;i<x;i++){
        cin >> s[i];
        sum=0;
        if(i>0){
            for(int j=i-1;j>=0;j--){
                if(s[j]==s[i]){
                    cout << "YES" << endl;
                    sum=1;
                    break;
                }
            }
        }    if(sum==0){
                cout << "NO" << endl;
            }
    }
    return 0;
}
