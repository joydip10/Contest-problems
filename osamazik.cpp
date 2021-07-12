#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;

    for(int i=1;;i++)
    {

        scanf("%d %d",&a,&b);
        if(a==0 && b==0) return 0;
        else
        {
            double p=((double)a*(double)b)/(2*3.1416);
            printf("Case %d: %.1lf\n",i,p);
        }
    }
    return 0;
}
