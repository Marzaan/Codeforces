#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    string y;
    cin >> n;
    while(n--){
        cin >> y;
        if(y=="X++" || y=="++X"){
            x=x+1;
        }
        else if(y=="X--" || y=="--X"){
            x=x-1;
        }
    }
    cout << x;
}
