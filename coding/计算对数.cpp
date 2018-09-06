/* 
计算对数
Description

给定两个正整数a（a>1)和b。可以知道一定存在整数x，使得

x <= loga b < x + 1 或者 a^x<= b < a^(x+1)

请计算x。


Input

两行，第一行是a，第二行是b。每个整数均不超过100位。


Output

一行，即对应的x。输入数据保证x不大于20。


Sample Input 1 

10000
1000000000001
Sample Output 1

3   */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//下次补充一个大数类
string multiply(string num1, string num2){
    vector<int> num_res(num1.size() + num2.size(), 0);
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());


    for(int i = 0; i < num1.size(); i++)
    for(int j = 0; j < num2.size(); j++){
        num_res[i+j] += (num1[i] - '0') * (num2[j] - '0');
    }

    for(int k = 0; k != num_res.size() - 1; k++){
        num_res[k+1] += num_res[k] / 10;
        num_res[k] = num_res[k] % 10;
    }

    int p = 0;
    for(p = num_res.size()-1; p != -1; p--){
        if(num_res[p] != 0)
            break;
    }

    if(p == -1)
        p = 0; 
    
    string res(p+1, '0');
    for(int i = p; i != -1; i--)
        res[p - i] = char(num_res[i] + '0');
    return res;
}


int comp(string num1, string num2){
    if(num1.size() != num2.size())
        return num1.size() - num2.size();
    for(int i = 0; i < num1.size(); i++){
        if(num1[i] != num2[i])
            return num1[i] - num2[i];
    }
    return 0;
}

int main(){
    string a, b;
    cin>>a>>b;
    string temp = "1";
    for(int i = 0; i < 20; i++){
        temp = multiply(temp, a);
        if(comp(temp, b) > 0){
            cout<<i<<endl;
            break;
        }
    }
}