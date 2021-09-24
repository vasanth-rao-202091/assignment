#include<iostream>
using namespace std;
int main()
{
    int a[50][50],i,j,item,n,l;
    cout<<"\nEnter number of rows and columns in an array:\n";
    cin>>n>>l;
    cout<<"shape"<<n<<','<<l<<endl;
    cout<<"\nEnter elements:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nEnter item to search:";
    cin>>item;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=l;j++)
        {
            if(item== a[i][j])
            {
                cout<<"\nItem found at location:"<<"["<<i<<"]"<<" ["<<j<<"]";
                break;
            }
        }
    }
    return 0;
}
