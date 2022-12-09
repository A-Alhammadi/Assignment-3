#include <iostream>
#include <queue>
#include <string>
#include <map>
#include "Header.h"

using namespace std;

int main()
{
	move_to_rear();//call function

	return 0;
}

void move_to_rear()
{
	queue<int> Q1;
	Q1.push(1);
	Q1.push(2);
	Q1.push(3);
	Q1.push(4);
	Q1.push(5);//add 1,2,3,4,5 as a test queue
	cout << "Element at front of queue: " << endl << Q1.front() << endl; // prints out the integer at the front before 
	int n = Q1.front(); //set int n as whatever is the first element of the queue to save it
	Q1.pop(); //removes the first element from the queue
	Q1.push(n); // adds n (which is whatever was the first element previously) to the end of the queue 
	cout << endl << "Element at front of queue after function called: " << endl;
	cout << Q1.front() << endl; //prints element now at the front

}

