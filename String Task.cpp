#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    string n;
    cin >> n;
    for(int i=0;i<n.size();i++){
        if(n[i]=='A' || n[i]=='a' || n[i]=='E' || n[i]=='e' || n[i]=='I' || n[i]=='i' || n[i]=='O' || n[i]=='o' || n[i]=='U' || n[i]=='u' || n[i]=='Y' || n[i]=='y'){
            continue;
        }
        if(n[i]>='A' && n[i]<='Z'){
            n[i]=tolower(n[i]);
            cout << "." << n[i];
        }
        else{
            cout << "." << n[i];n
        }
    }
    return 0;
}
