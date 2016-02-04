/*
 * CTECArray.cpp
 *
 *  Created on: Feb 4, 2016
 *      Author: mrir2917
 */

#include "CTECArray.h"
#include <iostream>

using namespace std;

template <class Type>

CTECArray<Type>::~CTECArray(int size)
{

}

template <class Tpe>

CTECArray<Type>::~CTECArray()
{

}

template <class Type>

int CTECArray<Type>:: getSize()
{
return this->size;
}

template <class Type>

Type CTECArray<Type>:: get(int position)
{
if(position >= size || position < 0)
{
return nullptr;
}

else
{
ArrayNode<Type> * current = head;
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

void CTECArray<Type>:: set(int position, Type vlaue)

{
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



