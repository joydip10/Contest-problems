#include<iostream>
using namespace std;

int main()
{
    long int n,m,ai[100],i,t,sum,count;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        sum=0;
        count=0;
        cin>>n>>m;
        for(int k=0;k<n;k++)
        {
            cin>>ai[k];
        }
        int tot=0;
        for(int k=0;k<n;k++)
        {
            tot=tot+ai[k];
        }
        int time=m;
        for(i=0;;i++)
        {
            if(time>0 && sum>=tot) break;
            sum=sum+ai[i];
            time=time-ai[i];
            count++;
        }

        cout<<"Case "<<j<<": "<<count<<endl;
    }
    return 0;
}
