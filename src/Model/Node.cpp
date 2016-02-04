/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: mrir2917
 */

#include "Node.h"
#include

template <class Type>
Node::Node()
{
	// TODO Auto-generated constructor stub
	value = 0;
	pointers = nullptr;
}

template <class Type>
Node::~Node()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
Type Node<Type> :: getValue
{
	return this->value;
}

template <class Type>
Node<Type> * Node<Type> ::getPointers()
{
	return this->pointers;
}
