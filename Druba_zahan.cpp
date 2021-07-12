#include<iostream>
using namespace std;
int func(int n)
{
    while(n>15)
    {
        n=n-15;
    }
    return n;
}

int main()
{
    int t,p;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>p;
        int n = func(p);
        cout<<"Case "<<i<<": ";
    if(n==1) cout<<"Guns n Roses";
    else if(n==2) cout<<"Pink Floyd";
    else if(n==3) cout<<"Scorpions";
    else if(n==4) cout<<"Cigarette after Sex";
    else if(n==5) cout<<"Metallica";
    else if(n==6) cout<<"Poets of Fall";
    else if(n==7) cout<<"Lamb of God";
    else if(n==8) cout<<"Nirvana";
    else if(n==9) cout<<"Shironamhin";
    else if(n==10) cout<<"Sohojia";
    else if(n==11) cout<<"Beatles";
    else if(n==12) cout<<"New Sonar Bangla Circus";
    else if(n==13) cout<<"Maksud O Dhaka";
    else if(n==14) cout<<"Meghdol";
    else if(n==15) cout<<"Coldplay";

        cout<<endl;
    }

    return 0;
}
