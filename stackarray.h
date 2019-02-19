#include<iostream>
using namespace std;

/* Implementation of Stack as Array using Classes in C++.
Code by Utkarsh Agrawal 
Please suggest edits wherever required! */

template<typename T>
class Stack{
	
	T  *ptr;			// pointer to a dynamically allocated array
	int pos;			// position of the topmost element
	int capacity;		// max possible size of stack
	
	public:
		
	Stack() : ptr(new T[100]), pos(-1), capacity(100)		// initialisation list
	{}
	
	void Push(T elem)										// function to push a new element in stack
	{
		if(pos==capacity-1)
		{
			capacity*=2;
			T *newptr= new T[capacity];						// creating a new array in heap of double the original capacity if stack is full.
			int i;
			for(i=0;i<=pos;i++)
			newptr[i]=ptr[i];
			
			newptr[i]=elem;
			pos=i;
			
			delete [] ptr;
			ptr=newptr;
			return;
		}
		
		ptr[++pos]=elem;
	}
	
	
	void Pop()					// deleting an element from stack		
	{	
		if(pos==-1)
			return;
			
		--pos;
	}
	
	T Top()				// returning topmost element
	{
		if(pos == -1)
		return -99999;
		
		return ptr[pos];
	}
	
	
	~Stack()			//destructor
	{
		cout<<"Deleting Stack"<<endl;
		delete [] ptr;
	}
	
	
	int size()			// return size of stack
    {
		return pos+1;
	}
	
};

