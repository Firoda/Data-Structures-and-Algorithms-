#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<int, string> arr;
	// Simple in and out
	
	int i = 4;
	cin >> arr[i];
	cout << arr[i];
	// Other method of insert
	arr.insert(pair <int, string> (6, "Heel"));
	// Used for FOR LOOP iterator is made
	
	map <int, string>:: iterator itr;
	for(itr = arr.begin();itr!= arr.end();itr++)
	{
		cout << itr->first << "\t";
		cout << itr->second << endl;
	}
	// Copying to other map
	map <int, string>quiz(arr.begin(), arr.end());
	cout << arr.max_size() << endl;
	cout << "\n\n";
	itr = arr.find(6);
	if(itr!= arr.end())
		cout << "I found the key at 6 \t"<< itr->second << "\n";
	if(arr.count(6))
		cout << "Used the count method" << endl;
	
	return 0;
}
/*
begin() – Returns an iterator to the first element in the map
end() – Returns an iterator to the theoretical element that follows last element in the map
size() – Returns the number of elements in the map
max_size() – Returns the maximum number of elements that the map can hold
empty() – Returns whether the map is empty
pair insert(keyvalue,mapvalue) – Adds a new element to the map
erase(iterator,position) – Removes the element at the position pointed by the iterator
erase(const g)- Removes the key value ‘g’ from the map
clear() – Removes all the elements from the map
key_comp() / value_comp() – Returns the object that determines how the elements in the map are ordered (‘<' by default)
find(const g) – Returns an iterator to the element with key value ‘g’ in the map if found, else returns the iterator to end
count(const g) – Returns the number of matches to element with key value ‘g’ in the map
lower_bound(const g) – Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will not go before the element with key value ‘g’ in the map
upper_bound(const g) – Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will go after the element with key value ‘g’ in the map
*/
