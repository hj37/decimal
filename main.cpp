#include <cstdio>

using namespace std;

int reverse(int x)
{
    int res = 0;
    while(x > 0)
    {
         int tmp = x%10;
         res = res*10 + tmp; /*�ᱹ ������ (���� �������� 10���ϱ� ���� ���ҷ���  */
         x = x/10; /*�� ���ϱ� �������� ������ ���� ���� ����� ����*/
    }
    return res;
}

bool isPrime(int x)
{
    if(x == 1) return true;
    bool flag = false;

    for(int i = 2; i < x; i++)
    {
        /*x�� 1�϶� ����ó�� �������*/

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
