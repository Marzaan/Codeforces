#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int ar[105],ar2[105];
    int x,y,z=0,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    cin >> x >> y;
    z=(y*2)+2;
        cin >> ar[0] >> ar2[0];
        sum=ar[0]*60;
        sum=sum+ar2[0];
        if(sum>y){
            sum4=1;
        }
        if(sum4==0){
            for(int i=1;i<x;i++){
                cin >> ar[i] >> ar2[i];
                sum1=ar[i]*60;
                sum1=sum1+ar2[i];
                sum3=sum1-sum;
                if(sum3>=z){
                    sum2=i-1;
                    sum5=1;
                    break;
                }
                else{
                    sum=sum1;
                }
            }
        }
        if(sum4==1){
            cout << 0 << " " << 0 << endl;
        }
        else if(sum4==0 && sum5==1){
            sum3=0;
            sum=(ar[sum2]*60)+ar2[sum2]+y+1;
            sum3=sum/60;sum=sum%60;
            cout << sum3 << " " << sum << endl;
        }
        else{
            sum3=0;
            sum=ar[x-1]*60+ar2[x-1]+y+1;
            sum3=sum/60;sum=sum%60;
            cout << sum3 << " " << sum << endl;
        }
    return 0;
}
