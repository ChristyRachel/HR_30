/*
 * src.cpp
 *
 *  Created on: Jun. 9, 2021
 *      Author: christy
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int n;
	string name;
	int number;
	cin >> n;
	map<string,int>phone_book;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		cin >> number;
		phone_book[name] = number;
	}

	while (cin >> name)
	{
		if ( phone_book.find(name) != phone_book.end() )
		{
			cout << name << "=" << phone_book.find(name)->second << endl;
		}
		else
		{
			cout << "Not found" << endl;
		}
	}
	return 0;
}
