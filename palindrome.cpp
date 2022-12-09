#include <iostream>
#include <queue>
#include <string>
#include <map>
#include "Header.h"

using namespace std;



int main() {

	string s;
	cout << "Please enter a word: " << endl;
	cin >> s; //take in word to see if palindrome
	if (palindrome(s))
		cout << endl << "The word is a palindrome"; //if it is this will be printed
	else
		cout << endl << "The word is NOT a palindrome"; //if it is not this will be

	return 0;
}





bool palindrome(string a) {
	if (a.length() <= 1)
		return true;                    //if the string is one letter (or none) then obviously it is the same right to left or left to right
	if (a[0] == a[a.length() - 1])      //we start at the first character of the string (position 0) and compare with the last (whatever the lenght is minus 1)
		return palindrome(a.substr(1, a.length() - 2)); //this is the recursive part we call the function again for the substring starting at the next position from both sides
	else
		return false;

}
