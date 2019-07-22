#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,4,7,8};
    int elem,flag=0,loc;
    cout<<"List Is "<<endl;
    for(int i =0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter Number YOu Want to search "<<endl;
    cin>>elem;
    for(int i =0;i<5;i++)
    {
        if(a[i]==elem)
        {
            loc = i;
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"Number is found at position "<<(loc+1);
    }
    else
    {
        cout<<"Sorry NO Such Number Exist ";
    }
}
