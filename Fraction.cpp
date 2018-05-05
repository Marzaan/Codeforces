#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    cin >> x;
    y=x/2;
    if(x%2==0){
        cout << y-1 << " " << y+1 << endl;
    }
    else{
        cout << y << " " << y+1 << endl;
    }
    return 0;
}
