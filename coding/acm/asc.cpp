#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    while(cin >> str){
        sort(str.begin(), str.end());
        for(int i = 0; i < 3; i++){
            cout << str[i];
            if(i != 2)
                cout<< ' ';
            else
                cout<< endl;
        }
    }
}