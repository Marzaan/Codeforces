#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    map<string,int>m;
    string s;
    for(int i=0;i<x;i++){
        cin >> s;
        m[s]++;
        if(m[s]==1){
            cout << "OK" << endl;
        }
        else{
            cout << s << m[s]-1 << endl;
        }
    }
    return 0;
}

