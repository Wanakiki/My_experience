#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void cmp(vector<pair<int, int> > & boards, int & i, int & j, vector<int> & lev){
    if((boards[i].first >= boards[j].first) && (boards[i].second >= boards[j].second)){
        lev[i]++;
    }
    if ((boards[i].first <= boards[j].first) && (boards[i].second <= boards[j].second)){
        lev[j]++;
    }
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > boards(n);
    for(int i = 0; i < n; i++)
        cin >> boards[i].first >> boards[i].second;

    vector<int> lev(n, 0);
    for(int i = 0; i < n - 1; i++)
    for(int j = i + 1; j < n; j++){
        cmp(boards, i, j, lev);
    }


    sort(lev.begin(), lev.end());

    int index = 0, num, temp; // 设置总索引，以及计数变量num，暂存变量temp
    for(int k = 0; k < n; k++){
        if(index < n){
            temp = lev[index++];
            num = 1;
        }
        else
            num = 0;
        //开始循环
        while(index < n){
            if(lev[index] == temp){
                num ++;
                index ++;
            }
            else
                break;
        }
        cout << num << endl;
    }

}