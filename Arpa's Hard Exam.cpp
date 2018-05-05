#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    long long x;
    cin >> x;
    if(x==0){
        cout << 1 << endl;
        return 0;
    }
    if(x>4){
        x=x%4;
    }
    if(x==1){
        cout << 8 << endl;
    }
    else if(x==2){
        cout << 4 << endl;
    }
    else if(x==3){
        cout << 2 << endl;
    }
    else if(x==4 || x==0){
        cout << 6 << endl;
    }
    return 0;
}
