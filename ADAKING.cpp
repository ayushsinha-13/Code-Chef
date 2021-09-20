#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int k;cin>>k;
        int arr[8][8]={0};
        int row;
        if(k/8 < 8)
        {
        	row = k/8;
		}
		else if(k/8 == 8)
		{
			row = 7;
		}
        int col;
        if(k%8 == 0)
        {
            col=7;
        }
        else if(k%8 < 8)
        {
            col = (k%8)-1;
        }

        for(int i=0;i<=row;i++)
        {
            if(i<row)
            {
                for(int j=0;j<8;j++)
                {
                    arr[i][j]=2;
                }
            }
            else if(i==row)
            {
                for(int j=0;j<=col;j++)
                {
                    arr[i][j]=2;
                }
            }
        }
        
        if(row < 7)
        {
        	for(int i=row;i<=row+1;i++)
        	{
        		if(col < 7 && i==row)
        		{
        			for(int j=col+1;j<8;j++)
        			{
        				arr[i][j]=3;
					}
				}
				else if(col < 7 && i==row+1)
        		{
        			for(int j=0;j<=col+1;j++)
        			{
        				arr[i][j]=3;
					}
				}
			}
		}
		else if(row == 7)
		{
			if(col < 7)
        		{
        			for(int j=col+1;j<8;j++)
        			{
        				arr[7][j]=3;
					}
				}	
		}
      
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
            	if(i==0 && j==0)
            	{
            		cout<<"O ";
				}
				else
				{
               		if(arr[i][j] == 2 || arr[i][j] == 0)
               		{
               			cout<<". ";
					}
					else if(arr[i][j]==3)
					{
						cout<<"X ";
					   }   
           		}
            }
            cout<<endl;
        }
    }
}