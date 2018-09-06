#include<iostream>
using namespace std;
int main(){
    int t, n;
    int * nums;
    int left, right, max, temp;
    cin >> t;
    for(int ti = 1; ti <= t; ti ++){
        
    }
    // for(int q = 1; q <= t; q++){
    //     cin >> n;
    //     nums = new int [n];
    //     for(int j = 0; j < n; j++){
    //         cin >> nums[j];
    //     }
    //     cout << "Case " << q << ':' << endl;

    //     max = INT_MIN;    //初始化最大值
    //     left = 0; right = 0;    //初始化开始结束位置
    //     for(int i = 0; i < n; i++){
    //         temp = nums[i];
    //         for(int j = i; j < n; j ++){
    //             if(j == i){
    //                 if(nums[i] <= max){
    //                     continue;
    //                 }
    //                 else{
    //                     max = nums[i];
    //                     left = i;
    //                     right = i;
    //                 }
    //             }
    //             else{
    //                 temp += nums[j];
    //                 if(temp > max){
    //                     max = temp;
    //                     left = i;
    //                     right = j;
    //                 }
    //             }
    //         }
    //     }

    //     cout << max << ' ' << left + 1 << ' ' << right + 1 << endl;
    //     delete nums;
    //     if(q != t)
    //         cout << endl;   
    // }
}
