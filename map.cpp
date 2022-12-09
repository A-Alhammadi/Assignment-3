#include <iostream>
#include <queue>
#include <string>
#include <map>
#include "Header.h"

using namespace std;



int main() {

	map<string, string> stateDataMap; //map container declaration

	stateDataMap.insert(make_pair("Nebraska", "Lincoln"));
	stateDataMap.insert(make_pair("New York", "Albany"));
	stateDataMap.insert(make_pair("Ohio", "Columbus"));
	stateDataMap.insert(make_pair("California", "Sacramento"));
	stateDataMap.insert(make_pair("Boston", "Massachusetts"));
	stateDataMap.insert(make_pair("Texas", "Austin"));//for each of the 6 pairs, the strings are inserted into the map and made pairs

	printData(stateDataMap); //calling function that prints all data in map

	map<string, string>::iterator itr; //iterator to use in the following line

	itr = stateDataMap.find("California");//find position of California in map and set the iterator to that

	itr->second = "Los Angeles"; //change the second string (capital) at that position to Los Angeles

	cout << endl << " AFTER CHANGE: " << endl;
	printData(stateDataMap); //printing again after the change

	
	return 0;
}



void printData(map<string, string> m)
{
	cout << "The States and Capitals stored in this map are: " << endl;
	for (map<string, string>::iterator itr = m.begin(); itr != m.end(); itr++)
	{
		cout << itr->first << ", " << itr->second << endl;
	}
}

void printCapital(map<string, string> m, string s)
{
	map<string, string>::iterator itr = m.find(s);
	cout << "The Capital of " << s << " is " << itr->second << endl;
}
