#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	string k = " cooking" ;
	cout<<"Enter s name : ";
	getline(cin,s);
	cout<<"The lion is "<<s;
	cout<<endl;
	
	//for accesing element ....
	cout<<s[0]<<endl;
	cout<<s.at(0);
	cout<<endl;
	
	//for length of string ..
	cout<<s.size()<<endl;
	cout<<s.length();
	cout<<endl;
	
	//checking if the element is present or not 
	cout<<s.empty();  //return boolen......true/false
	cout<<endl;
	
	// for appending or adding to string...
	
	cout<<s.append(k);
	cout<<endl;
	s + k;
	cout<<s<<endl;
	
	//Adding single character to end of a string....using pushback
	
	s.push_back('!');
	cout<<s<<endl;
	
	//Inserting element at particular position ...
	
	s.insert(3,"cat");    // where 3 is the position of index where u want to add..
	cout<<s;
	cout<<endl;
	
	//For deleteing any string from any index....
	
	s.erase(2,4);//where 2 is starting position and 4 is ending position..
	cout<<s;
	cout<<endl;
	
	//for empty the string ...
	s.clear();
	cout<<s;
	cout<<endl;
	
	
	
	
	
}