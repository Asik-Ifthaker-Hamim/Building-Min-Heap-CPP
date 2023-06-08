#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v[i]=x;
        int r=i;
        int l=r/2;
        while(l>=1 && r>=1 && v[l]>v[r])
        {
            swap(v[l],v[r]);
            r=l;
            l=r/2;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

