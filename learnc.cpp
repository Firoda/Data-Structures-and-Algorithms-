#include<iostream>
#include<map>
using namespace std;



int main()
{
	map<string, int> Phone;
	Phone["Aditya"] = 456;
	Phone["Ramesh"] = 4576;
	Phone["Nimit"] = 2232;
	Phone["Adwait"]  = 789;
	Phone.insert(pair<string, int>("Help", 3445));
	Phone.insert(pair<string, int>("Win", 2184));
	map<string, int>::iterator fin = Phone.find("qwee");
	if(fin != Phone.end())
	cout << "Phone of "<<fin->first << " => "<<fin->second << "\n" << endl;
	// Phone.clear();	
	
	cout << "Size  "<< " => " << Phone.size()<<"\n";
	for(map<string, int>::iterator it = Phone.begin(); it != Phone.end(); ++it)
	{
		cout << it->first << " => "<<it->second << "\n";
		
	} 
	
	
	string query;
	cin >> query;
	map<string, int>::iterator op = Phone.find(query);
	if(op == Phone.end())
		cout << "Not found" << endl;
	else
		cout << op->first <<" => "<<op->second << endl; 

	
}
