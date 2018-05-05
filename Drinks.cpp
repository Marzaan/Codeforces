#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    double y=0;
    cin >> x;
    int ar[x+1];
    for(int i=0;i<x;i++){
        cin >> ar[i];
        y=y+ar[i];
    }
    printf("%0.12lf\n",y/x);
    return 0;
}
