#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int random_number;
	int guessed_number;
	int i=0;
	char quit;
	
	cout<<"I have selected a number between 1 to 1000."<<endl;
	cout<<"You need to guess it."<<endl;
	
	random_number = rand()%1000;
    
	while(quit!='n')
	{
			
	do
	{
		cout<<"Enter your guessed number : ";
		cin>>guessed_number;
		if(guessed_number<random_number)
		{
			cout<<"Too low. Try again."<<endl;
		}
		else if(guessed_number>random_number)
		{
			cout<<"Too high. Try again."<<endl;
		}
		else if(guessed_number=random_number)
		{
		    cout<<"You are correct. Wanna play again (Y or n)";
		    cin>>quit;
		    break;
	    }
	}while(quit=='Y');
}
	return 0;
}
