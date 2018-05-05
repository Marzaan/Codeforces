#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main ()
{
    string s1,s2;
    int sum=0;
    cin >> s1;
    int i=0,j=0;
    for(i=s1.size()-1,j=0;i>=0,j<s1.size();i--,j++){
        s2[j]=s1[i];
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            continue;
        }
        else{
            sum++;
        }
    }
    if((sum==2) || ((sum==1)&&(s1.size()%2==1))){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
