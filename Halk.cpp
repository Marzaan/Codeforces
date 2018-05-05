#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin >> x;

    cout << "I hate ";

    for(int i=1;i<=x;i++){
        if(i==x){
            break;
        }
        cout << "that ";
        if(i%2==1){
            cout << "I love ";
        }
        if(i%2==0){
            cout << "I hate ";
        }
    }
    cout << "it" << endl;

    return 0;
}
