#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int counter=0;
    cin>>size;
    int nums[size];
    for(int i=0; i<size; i++)
    {

        cin>>nums[i];
    }

    int min_num=nums[0];

    for(int i=0; i<size; i++)
    {
        if(nums[i]<min_num)
        {
            min_num=nums[i];
        }

    }
    for(int i=0; i<size; i++)
    {
        if(nums[i]==min_num)
        {
            counter++;
        }

    }

    if(counter % 2 != 0)
    {
        cout<<"Lucky"<<endl;
    }
     else if(counter ==1)
    {
        cout<<"Lucky"<<endl;
    }
    else
    {

        cout<<"Unlucky"<<endl;
    }







    return 0;
}
