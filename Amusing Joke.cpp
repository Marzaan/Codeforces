#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2,s3,s4;
    int temp=0;
    cin >> s1 >> s2 >> s3;
    s4=s1+s2;
    for(int i=0;i<s4.size()-1;i++){
        for(int j=i+1;j<s4.size();j++){
            if(s4[i]>s4[j]){
                temp=s4[i];
                s4[i]=s4[j];
                s4[j]=temp;
            }
        }
    }
    for(int i=0;i<s3.size()-1;i++){
        for(int j=i+1;j<s3.size();j++){
            if(s3[i]>s3[j]){
                temp=s3[i];
                s3[i]=s3[j];
                s3[j]=temp;
            }
        }
    }
    if(s3==s4){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
