#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void checkNum(int,int);
int main()
{
	int num,number,i=0;
	srand(time(NULL));
	cout << "###Welcome to guessing number game###\n";
	cout << "Secret number has been chosen\n";
	
	do{
		num = rand() % 10+1;
		cout << "Guess the number (1 to 10): ";
		cin >> number;
		checkNum(number,num);
		i++;
	}
	while(number != num);
	cout << "The secret number is " << num <<"\n";
	cout << "You made " << i << " guesses.\n";
	return(0);
}
void checkNum(int n,int nu)
{
	if(nu>n)
	{
		cout << "The secret number is lower\n";
	}
	else if(nu<n)
	{
		cout << "The secret number is higher\n";
	}
	else
	{
		cout << "Congratulations\n";
	}
}