#include <cstdio>

using namespace std;

int reverse(int x)
{
    int res = 0;
    while(x > 0)
    {
         int tmp = x%10;
         res = res*10 + tmp; /*결국 나머지 (이전 나머지는 10곱하기 답을 구할려고  */
         x = x/10; /*몫 구하기 나머지를 제외한 남은 숫자 계산을 위해*/
    }
    return res;
}

bool isPrime(int x)
{
    if(x == 1) return true;
    bool flag = false;

    for(int i = 2; i < x; i++)
    {
        /*x가 1일때 예외처리 해줘야함*/

        if(x%i == 0)
        {
            flag = true;
            break;
        }

    }

    return flag;
}

int main()
{
    freopen("input.txt","rt",stdin);
    int n,num,i,tmp;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&num);
        tmp = reverse(num);
        if(!isPrime(tmp)) printf("%d ",tmp);
    }

    return 0;
}
