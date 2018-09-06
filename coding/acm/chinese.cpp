#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    string str;
    char temp;
    cin >> temp;
    while(t--){
        int sum = 0;
        while(1){
            temp = getchar();
            if(temp == '\n')
                break;
            if(temp < 0)
                sum ++;
        }
        cout << sum / 2 << endl;
    }
    
}