#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char c[5005];
    int sum=0,sumA=0,sumA1=0,sumB=0,sumB1=0,sumC=0,sumC1=0;

    cin >> c;

    for(int i=0;i<strlen(c);i++){
        if(c[i]=='a'){
            if(sumA1==1 || sumB1==1 || sumC1==1){
                sum=1;
                break;
            }
            else{
                sumA++;
                continue;
            }

        }
        else{
            if(sumA>=1){
                sumA1=1;
            }
        }
        if(c[i]=='b'){
            if(sumA1==0 || sumB1==1 || sumC1==1){
                sum=1;
                break;
            }
            else{
                sumB++;
                continue;
            }

        }
        else{
            if(sumB>=1){
                sumB1=1;
            }
        }
        if(c[i]=='c'){
            if(sumA1==0 || sumB1==0 || sumC1==1){
                sum=1;
                break;
            }
            else{
                sumC++;
            }
        }
        else{
            if(sumC>=1){
                sumC1=1;
            }
        }
    }
    if(sum==1){
        cout << "NO" << endl;
    }
    else if(sumA==0 || sumB==0 || sumC==0){
        cout << "NO" << endl;
    }
    else if(sumA==sumC || sumB==sumC){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
