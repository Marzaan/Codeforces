#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,sum=0;
    cin >> x;
    char s[1005];
    char st[1005];
    std::set<std::string> s2;
    for(int k=0;k<x;k++){
        cin >> s;
        int si=strlen(s);
        set<int>s1;
        set<int> :: iterator j;
        for(int i=0;i<si;i++){
            s1.insert(s[i]);
        }
        int a=0; string str="";
        for(j=s1.begin();j!=s1.end();j++){
            st[a]=*j;
            str+=st[a];
            a++;
        }
        s2.insert(str);
    }
    cout << s2.size() << endl;

    return 0;
}
