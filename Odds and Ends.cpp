#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n[100];
    int sum=0;
    int x;
    cin >> x;
    for(int i=0;i<x;i++){
        cin >> n[i];
    }
    if(n[0]%2==1 && n[x-1]%2==1){
        for(int i=0;i<x;i=i+3){
            if(n[i]%2==1 && n[i+2]%2==1){
                sum=sum+1;
            }
            else if(x%2==1 && n[x-2]%2==1){
                sum=sum+2;
            }
            else if(x%2==1){
                sum=sum+1;
            }
            else if(x%2==0){
                sum=sum+1;
            }
        }
        if(sum%2==1){
             cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
