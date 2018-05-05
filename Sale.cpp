#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,temp=0,sum=0;
    cin >> x >> y;
    int a[x+1];
    for(int i=0;i<x;i++){
        cin >> a[i];
    }
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<y;i++){
        if(a[i]>=0){
            break;
        }
        else{
            sum=sum+a[i];
        }
    }
    cout << -sum;
    return 0;
}
