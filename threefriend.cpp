#include<stdio.h>
int main()
{
    int t,x,y,z,cho,ice,chip,bur,i,sum=0;
    scanf("%d",&t);
    if(t>15)
        return 0;
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&x,&y,&z);
        scanf("%d %d %d %d",&cho,&ice,&chip,&bur);
        sum=x+y+z;
        printf("Case %d:\n",i);
        if((cho*3)<=sum || (ice*3)<=sum || (chip*3)<=sum ||(bur*3)<=sum)
        {
            printf("Event 1:\n");
            if((cho*3)<=sum) printf("Chocolate\n");
            if((ice*3)<=sum) printf("Icecream\n");
            if((chip*3)<=sum) printf("Chip\n");
            if((bur*3)<=sum) printf("Burger\n");
        }
        else
        {
            printf("Event 2:\n");
            if(x>y && x>z) printf("They will visit Atik's House\n");
            else if(y>z && y>x) printf("They will visit Akash's House\n");
            else if(z>x && z>y) printf("They will visit Aslam's House\n");
        }
    }
    return 0;
}
