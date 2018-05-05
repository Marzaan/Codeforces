#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    int i,sum=0;
    string s;
    cin >> s;

    for(i=1;i<s.size();i++){
        if(s[i]==toupper(s[i])){
            sum=sum+1;
        }
        else{
            break;
        }
    }
    if(sum>=s.size()-1){
        for(i=0;i<s.size();i++){
            if(s[i]==toupper(s[i])){
                s[i]=tolower(s[i]);
            }
            else if(s[i]==tolower(s[i])){
                s[i]=toupper(s[i]);
            }
        }
    }
    cout << s;
    return 0;
}
