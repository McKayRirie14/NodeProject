/*
 * CTECArray.cpp
 *
 *  Created on: Feb 4, 2016
 *      Author: mrir2917
 */

#include "CTECArray.h"
#include <assert.h>
using namespace std;

template <class Type>
CTECArray<Type>::~CTECArray(int size)
{
	this->size = size;
	head->head =nullptr;

	assert(size <=0)

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{	//We have more than one ArrayNode.
			ArrayNode<Type> nextNode = new ArrayNode<Type>();
			nextNode_>setNext(head);
			head = nextNode;

		}
		else
		{	//This is the first node in the array
			ArrayNode<Type> * first = new ArrayNode<Type>();
			head = first;
		}
	}
}

template <class Tpe>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type>* deleteMe = head;
	for (int index = 0; index < size; index++)
	{
		if (deleteMe->getNext() !)
	}
}

template <class Type>
int CTECArray<Type>:: getSize()
{
return this->size;
}

template <class Type>
Type CTECArray<Type>:: get(int position)
{
	/*Bounds check for size and negative.
	 * The call to assert checks that the position lies within
	 * the valid range of indices. If it out of the bounds,
	 * the program will exit.
	 */

	assert(position < size && position >= 0);

	ArrayNode<Type> * curretn = head;
	//Inclusive cause I am inside the bounds guaranteed :D
	for (int spot  0; spot <= position; spot++)
	{
		if (spot != position)
		{
			current = current->getNext();
		}
		else
		{
			return current->getValue();
		}
	}
}

template<class Type>
void CTECArray<Type>::set(int position, const Type&value)
{
	//Bounds check for size and negative.
	assert(position <size || position < 0)
	{
		cerr << "Don't do this! out of bounds!!! Doh" << endl;
	}
	else
	{
		ArrayNode<Type> * current = head;
		//Inclusive because I am inside the bounds guaranteed :D
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot !=position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template <class Type>
void CTECArray<Type>:: set(int position, Type& vlaue)
{
	//Bounds check for size and negative.
	if(position >= size || position < 0)
	{
		cerr << "Don't do this!" << endl;
	}
	else
	{
		ArrayNode<YType> * current = head;
		for (int spot = 0;spot <= position; spot++)
		{
			if (spot != position)

			{
				current = current->getNext();
			}
			else
			{
				current = curnt->setValue();
			}
		}
	}
}

#endif /* SRC_MODEL_CTECARRAY_H_ */



