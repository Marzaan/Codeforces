#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,sum=0,sum2=0;
    cin >> x;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            sum++;
        }
        else if(s[i]=='D'){
            sum2++;
        }
    }
    if(sum>sum2){
        cout << "Anton" << endl;
    }
    else if(sum<sum2){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}
