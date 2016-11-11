#include <iostream>

using namespace std;

int main()
{
    int a,n;
    int i,j;
    int xiang = a,sum = 0;

    do
    {
        cout<<"input a,n: ";
        cin>>a>>n;
    }
    while(a <= 0 || n <= 0 || a >= 10);


    cout<<endl;


    while(n>=1)
    {
       sum += a * n;
       a *= 10;
       n -= 1;
    }

    cout<<sum<<endl;

    return 0;
}
