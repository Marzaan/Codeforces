#include<bits/stdc++.h>
using namespace std;
long long int mini(int m,long long int n)
{
    if(m>n){
        return n;
    }
    else{
        return m;
    }
}
int main ()
{
    long long int a,b,x,y,z;
    cin >> x >> y >> z;
    a=mini(x,y);
    b=mini(a,z);
    cout << b <<endl;
    return 0;
}
