#include<iostream>
using namespace std;
int main()
{
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j%2==0 && j>0)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
}