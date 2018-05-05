#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s,n,a,b,sum=0;
    cin >> s >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(s<a){
            sum=1;
            cout << "NO" << endl;
            break;
        }
        else if(s>=a){
            sum=0;
            s=s+b;
        }
    }
    if(sum==0){
        cout << "YES" << endl;
    }
    return 0;
}
