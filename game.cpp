#include<iostream>
using namespace std;
int main()
{
	int sum=0, num;
	for (num=100; num<=200; num++)
	{
		if(num%9==0)
		{
			
			cout<<num<<"\t"<<endl;
			sum=sum+num; 
		}
	}
 	cout<<"the sum is "<<sum;
	return 0;	
}
