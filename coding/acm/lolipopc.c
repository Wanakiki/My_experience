#include <stdio.h>
//using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int cur, num, temp, flag = 1;
    while (n--)
    {
        scanf("%d", &temp);
        if (flag)
        {
            num = 1;
            cur = temp;
            flag = 0;
            continue;
        }

        if (num == 0)
        {
            num++;
            cur = temp;
        }
        else
        {
            if (cur == temp)
            {
                num++;
            }
            else
            {
                num--;
            }
        }
    }
    printf("%d\n", cur);
}

// 借鉴了网上的奇淫技巧