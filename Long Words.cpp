#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    while(x--){
        string n;
        cin >> n;
        if(n.size()<=10){
            cout << n << endl;
        }
        else{
            cout << n[0] << n.size()-2 << n[n.size()-1] << endl;
        }
    }
    return 0;
}
