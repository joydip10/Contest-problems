#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[5],b[5];
    cin>>a>>b;
    int count=0;
    for(int i=0,j=0;i<strlen(a),j<strlen(b);i++,j++)
    {
        if(a[i]!=b[j]) count++;
    }
    cout<<(strlen(a))-bcount<<endl;
}
