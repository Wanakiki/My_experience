#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string helper(string a, string b){
    string res;
    int len1 = a.size() - 1, len2 = b.size() - 1;
    int temp = 0;
    while(1){
        if(len1 < 0 && len2 < 0){
            if(temp)
                res += temp + '0';
            break;
        }

        if(len1 >= 0){
            temp += a[len1] - '0';
            len1 --;
        }
        if(len2 >= 0){
            temp += b[len2] - '0';
            len2 --;
        }
        res += temp % 10 + '0';
        temp /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    string a, b;
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> a >> b;
        string c = helper(a,b);
        cout << "Case " << i << ':' << endl;
        cout << a << " + " << b << " = " << c << endl;
        if(i != t)
            cout << endl;
    }
}