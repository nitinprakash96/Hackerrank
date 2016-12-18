#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
	char str[3000];
	
	cin.getline(str,3000);
	
	int words = 0; // Holds number of words
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '_') //Checking for spaces
		{
			words++;
		} 		
	}

	cout << words+1 << endl;

	return 0;
}

