#include<iostream>
using namespace std;

long long helper(int n){
    if(n == 1)
        return 1;
    long long n1 = 1, n2 = 2;
    long long temp;     //temp应该为long long
    for(int i = 3; i <= n; i++){
        temp = n1;
        n1 = n2;
        n2 += temp;
    }
    return n2;
}
int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << helper(b - a) <<endl;
    }
}