#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int arr[9][9],arr2[9][9],count=0,max=0;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        for (int i = 0; i < 9; i++)
        {
           
            for (int j = 0; j < 9; j++)
            {
                 count=0;
                if (arr[i][j]!=0)
                {
                    for (int k = 0; k < 9; k++)
                    {
                        if (arr[i][j]==arr[i][k] || arr[i][j]==arr[k][j])
                        {
                            count++;
                        }
                        
                    }
                    
                }
                 if (count>max)
                  {
                     max=count;
                  }
            }
        }
        if (max>2)
         cout<<"0"<<endl;
        else
         cout<<"1"<<endl;
           
    }
    
}
