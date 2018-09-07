#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cur, num, temp;
    bool flag = true;
    while(n --){
        cin >> temp;
        if(flag){
            num = 1;
            cur = temp;
            flag = false;
            continue;
        }

        if(num == 0){
            num++;
            cur = temp;
        }
        else{
            if(cur == temp){
                num++;
            }
            else{
                num--;
            }
        }
    }
    cout << cur << endl;
}

// 借鉴了网上的奇淫技巧