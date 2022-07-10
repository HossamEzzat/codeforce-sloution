#include<iostream>
using namespace std;
int main()
{
    int number1, number2,c=0;
    cin>>number1>>number2;

    for(int i=number1; i<=number2; i++)
    {
        int notlucky =0;
        int x=i;
        while(x)
        {
            if(x%10 !=4 && x%10 !=7)
            {
                notlucky++;
            }
            x=x/10;
        }

        if(notlucky==0)
        {
            cout<<i<<" ";
            c++;
        }



    }


    if(c==0)
    {
        cout<<-1<<endl;
    }

    return 0;
}
