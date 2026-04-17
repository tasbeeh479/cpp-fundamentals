#include <iostream>
using namespace std;
int main()
{
	double weekly_income=15000;
	double rent=400;
	double groceries=250;
	double goal=500;			//Goal to save money
	double remaining_budget=weekly_income-(rent+ groceries);
	double goal_perday=goal/7;


	cout<<"THE REMAINING BUDGET PER WEEK WILL BE: "<<remaining_budget;
	cout<<"\nThe Goal Per Day should be: "<<goal_perday;
	return 0;
}