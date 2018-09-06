/*
描述
在国外，每月的13号和每周的星期5都是不吉利的。特别是当13号那天恰好是星期5时，更不吉利。已知某年的一月一日是星期w，并且这一年一定不是闰年，求出这一年所有13号那天是星期5的月份，按从小到大的顺序输出月份数字。（w=1..7）

输入
输入有一行，即一月一日星期几（w）。（1 <= w <= 7）
输出
输出有一到多行，每行一个月份，表示该月的13日是星期五。
样例输入
7
样例输出
1
10
提示
1、3、5、7、8、10、12月各有31天
4、6、9、11月各有30天
2月有28天 */

#include<iostream>
using namespace std;
int getday(int month){
    if(month == 2)
        return 28;
    else if(month == 4 || month ==6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int main(){
    int first_day;
    cin>>first_day;
    first_day--;
    int day = 0;
    for(int i = 1; i < 13; i++){
        day = getday(i);
        if(first_day == 6)
            cout<<i<<endl;
        first_day = (first_day + day) % 7;
    }
    
}