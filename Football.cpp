#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int sum=0;
    cin >> x;
    for(int i=0;i<x.size();i++){
        if(i>=1){
            if(x[i]==x[i-1]){
                sum=sum+1;
                if(sum==6){
                    cout << "YES";
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                sum=0;
                continue;
            }
        }
    }
    if(sum<6){
        cout << "NO";
    }
    return 0;
}
