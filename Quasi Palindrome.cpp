#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main ()
{
    string s;
    stack<int>st,st2,st3;
    cin >> s;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    while(st.top()=='0'){
        st.pop();
    }
    st3=st;
    while(!st3.empty()){
        st2.push(st3.top());
        st3.pop();
    }
    if(st==st2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
