#include <iostream>
using namespace std;
int n,a,b,nwd;
int main()
{
    cin>>n;
    while(n>=1)
    {
        cin>>a>>b;
        if(a<=b)
        {
            for(int i=1; i<=a; i++)
            {
                if(a%i==0&&b%i==0) nwd=i;
            }
        }
        else
        {
            for(int i=1; i<=b; i++)
            {
                if(a%i==0&&b%i==0) nwd=i;
            }
        }
        cout<<a*b/nwd<<endl;
        n--;
    }
    return 0;
}
