#include<stdio.h>
//#include<iostream>
//using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int l,m;
        scanf("%d%d",&l,&m);
        int totalnum=(m-l+1),count1=0,count2=0;
        for (int i = l; i <= m; i++)
        {
            
            if(i>1)
            {
                count1=0;
                if(i!=2 && i!=3 && i!=5 && i!=7)
                {
                  if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
                  {
                    count1++;
                  }
                  else
                  {
                    for (int j = 2; j*j < i; j++)
                    {
                      if(i%j==0)
                      count1++;
                    }
                  //  cout<<i<<" ";
                  }
                }
                if (count1==0)
                {
                    count2++;
                   // cout<<i<<" "<<count1<<" "<<count2<<endl;
                }
            } 
        }
        //printf("%d\n",count2);
        totalnum-=count2;
        totalnum-=count2;
        printf("%d\n",totalnum);
        
    }
    return 0;
}