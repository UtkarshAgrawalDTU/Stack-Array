#include <iostream>
#include"stackarray.h"

/* Implementation of Stack as Array using Classes in C++.
Code by Utkarsh Agrawal 
Please suggest edits wherever required! */

int main()
{
	Stack <int> s;
	int elem, choice;
	
	do
	{
		
	system("cls");
	cout<<"1. Push"<<endl;
	cout<<"2. Size"<<endl;
	cout<<"3. Top"<<endl;
	cout<<"4. Pop"<<endl;
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:  	cin>>elem;
					s.Push(elem);
				 	break;
		
		case 2: 	cout<<s.size();
					break;
					
		case 3: 	cout<<s.Top();
					break;
					
		case 4:		s.Pop();
					break;			
		
		
	}
	
	cout<<"Again?";
	cin>>choice;
	
	}while(choice!=0);
	
}
