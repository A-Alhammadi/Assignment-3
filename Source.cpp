#include <iostream>
#include <queue>
#include <string>
#include <map>
#include "Header.h"

using namespace std;



int main() {

	//move_to_rear();//call function
	string s;
	cout << "Please enter a string: " << endl;
	cin >> s; //take in word to see if palindrome
	if (palindrome(s))
		cout << endl << "The string is a palindrome"; //if it is this will be printed
	else
		cout << endl << "The string is NOT a palindrome"; //if it is not this will be
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
	cout << flush << "Element at front of queue: " << endl << Q1.front() << endl; // prints out the integer at the front before 
	int n = Q1.front(); //set int n as whatever is the first element of the queue to save it
	Q1.pop(); //removes the first element from the queue
	Q1.push(n); // adds n (which is whatever was the first element previously) to the end of the queue 
	cout << endl << "Element at front of queue after function called: " << endl;
	cout << Q1.front() << endl; //prints element now at the front

}

bool palindrome(string a) {
	if (a.length() <= 1)
		return true;                    //if the string is one letter (or none) then obviously it is the same right to left or left to right
	if (a[0] == a[a.length() - 1])      //we start at the first character of the string (position 0) and compare with the last (whatever the lenght is minus 1)
		return palindrome(a.substr(1, a.length() - 2)); //this is the recursive part we call the function again for the substring starting at the next position from both sides
	else
		return false;

}
