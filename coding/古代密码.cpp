/*
Description

古罗马帝国有一个拥有各种部门的强大政府组织。其中一个部门就是保密服务部门。为了保险起见，在省与省之间传递的重要文件中的大写字母是加密的。当时最流行的加密方法是替换和重新排列。

替换方法是将所有出现的字符替换成其它的字符。有些字符会替换成它自己。例如：替换规则可以是将'A' 到 'Y'替换成它的下一个字符，将'Z'替换成 'A'，如果原词是 "VICTORIOUS" 则它变成 "WJDUPSJPVT"。

排列方法改变原来单词中字母的顺序。例如：将顺序<2, 8="">应用到 "VICTORIOUS" 上，则得到"IVOTCIRSUO"。

人们很快意识到单独应用替换方法或排列方法加密，都是很不保险的。但是如果结合这两种方法，在当时就可以得到非常可靠的加密方法。所以，很多重要信息先使用替换方法加密，再将加密的结果用排列的方法加密。用两种方法结合就可以将"VICTORIOUS" 加密成"JWPUDJSTVP"。

考古学家最近在一个石台上发现了一些信息。初看起来它们毫无意义，所以有人设想它们可能是用替换和排列的方法被加密了。人们试着解读了石台上的密码，现在他们想检查解读的是否正确。他们需要一个计算机程序来验证，你的任务就是写这个验证程序。


Input

输入有两行。

第一行是石台上的文字。文字中没有空格，并且只有大写英文字母

第二行是被解读出来的加密前的文字。第二行也是由大写英文字母构成的。

两行字符数目的长度都不超过100。


Output

如果第二行经过某种加密方法后可以产生第一行的信息，输出 "YES"，否则输出"NO"。


Sample Input 1 

JWPUDJSTVP
VICTORIOUS
Sample Output 1

YES
Source

2159    */

/*#include<iostream>
#include<string>
using namespace std;
bool helper(string str_old, string str_new){
    int len = str_old.size();
    for(int i = 0; i < len; i++){
        if(str_old[i] == 'Z')
            str_old[i] = 'A';
        else
            str_old[i] += 1;
    }
    int flag = 1;   //标记反序情况
    for(int i = 0; i < len;){
        swap(str_old[i], str_old[i + flag]);
        i = i + flag + 1;
        if(flag == 1)
            flag = 2;
        else
            flag = 1;
    }
    return str_old == str_new;
}

int main(){
    string str_old, str_new;
    cin >> str_new >> str_old;
    if(helper(str_old, str_new))
        cout<<"YES";
    else
        cout<<"NO";
}*/
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
bool helper(string str_old, string str_new){
    int letters_old[26], letters_new[26];
    //linux需要初始化？？
    for(int i = 0;i < 26; i++){
        letters_new[i] = 0;
        letters_old[i] = 0;
    }
    int len1 = str_old.size(), len2 = str_new.size();
    if(len1 != len2)
        return false;
    for(int i = 0; i < len1; i++){
        letters_old[str_old[i] - 'A'] ++;
        letters_new[str_new[i] - 'A'] ++;
    }
    sort(letters_old, letters_old + 26);
    sort(letters_new, letters_new + 26);
    for(int i = 0; i < 26; i++){
        if(letters_old[i] != letters_new[i])
            return false;
    }
    return true;
}
int main(){
    string str_old, str_new;
    cin >> str_new >> str_old;
    if(helper(str_old, str_new))
        cout<<"YES";
    else
        cout<<"NO";
}