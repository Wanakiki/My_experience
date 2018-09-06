/*
八进制小数
Description

八进制有限小数均可以用十进制有限小数精确地表示。比如，八进制里面的0.75等于十进制里面的0.963125 (7/8 + 5/64)。所有小数点后位数为n的八进制小数都可以表示成小数点后位数不多于3n的十进制小数。

你的任务是写一个程序，把(0,1)之间的八进制小数转化成十进制小数。


Input

一行，包含一个八进制小数。每个小数的形式是0.d1d2d3 ... dk，这里di是八进制数0...7，dk不等于0，而且已知0 < k < 15。


Output

输入如下形式的一行

0.d1d2d3...dk [8] = 0.D1D2D3...Dm [10]
这里左边是输入的八进制小数，右边是相等的十进制小数。输出的小数末尾不能有0，也就是说Dm不等于0。注意空格位置。


Sample Input 1 

0.75
Sample Output 1

0.75 [8] = 0.953125 [10] */
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
double helper(string num){
    double res = 0;
    int eight = 8;
    for(int i = 2; i < num.size(); i++){
        res += (num[i] - '0') / double(eight);
        eight *= 8;
    }
    return res;
}
int main(){
    string num;
    cin>>num;
    cout<<num;
    printf(" [8] = %f [10]", helper(num));
}