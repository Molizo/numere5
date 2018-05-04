#include <iostream>

using namespace std;

int main()
{int n,endpoint=1,pos=0,cnt=0;
    cin>>n;
    int v[n];
    for(int i=0;i<=n;i++)
        endpoint=endpoint*10;
    for(int i=endpoint/10;i<endpoint;i++)
    {
        for(int j=n;j>0;j++)
            v[j-1]=i%10;
        for(int j=2;j<n;j++)
        {
            if(v[n-2]==v[n-1]==v[n])
            {
                cnt++;
                break;
            }
        }
    }
    cout<<endpoint-endpoint/10-cnt;s
    return 0;
}
