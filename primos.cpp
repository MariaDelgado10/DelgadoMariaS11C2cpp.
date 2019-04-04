#include<iostream>


int primos(int,int);

int main()
{
std::cout<<primos(1,10);
}


int primos(int a, int b)
{
	int primo=0;
	
	for (int i=a; i<=b; i++)
	{
		for (int j=2; j<=i; j++)
		{
		
		int res=i%j;
		if(res==0)
		{
		 primo=i;	
		std::cout<<primo<<std::endl;
		}
		else
		{
		j++;
		}
	
	
	}
	}
}

