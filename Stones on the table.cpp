#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int i,x,sum=0;
    cin >> x;
    char s[55];
    for(i=0;i<x;i++){
        cin >> s[i];
        if(i>=1){
            if(s[i]==s[i-1]){
                sum=sum+1;
            }
        }
        else{
            continue;
        }
    }
    cout << sum;
    return 0;
}
