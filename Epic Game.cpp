#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int c;
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else if(a>b){
        c=a%b;
        while(1)
        {
            if(c==0){
                return b;
                break;
            }
            else{
                a=b;
                b=c;
                c=a%b;
            }
        }
    }
    else{
        int c;
        c=b%a;
        while(1)
        {
            if(c==0){
                return a;
                break;
            }
            else{
                b=a;
                a=c;
                c=b%a;
            }
        }
    }
}

int main ()
{
    int x,y,z,sum=0;
    cin >> x >> y >> z;
    while(1)
    {
        if(z<gcd(x,z)){
            sum=1;
            break;
        }
        else{
            z=z-gcd(x,z);
        }
        if(z<gcd(y,z)){
            sum=0;
            break;
        }
        else{
            z=z-gcd(y,z);
        }
    }
    cout << sum;
    return 0;
}
