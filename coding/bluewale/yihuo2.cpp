#include<iostream>
#include<string>
using namespace std;
int main(){
    int temp;
    string res;
    for(int i = 0; i < 22; i++){
        cin >> hex >> temp;
        temp ^= i;
        res += temp;
    }
    cout <<res;
}