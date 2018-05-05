#include<iostream>
using namespace std;
int main ()
{
    int x,y,z[105],sum=0;
    cin >> x >> y;
    for(int i=1;i<=x;i++){
        cin >> z[i];
    }
    for(int j=1;j<=x;j++){
        if(z[y]<=z[j] && z[j]>0){
            sum++;
        }
        else{
            break;
        }
    }
    cout << sum;
    return 0;
}
