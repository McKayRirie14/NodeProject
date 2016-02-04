/*
 * CTECArray.h
 *
 *  Created on: Feb 4, 2016
 *      Author: mrir2917
 */

#ifndef SRC_MODEL_CTECARRAY_H_
#define SRC_MODEL_CTECARRAY_H_

#include "Node.h"

template <class Type>
class CTECArray
{
private:
	int size;
	ArrayNode<Type> * head;
public:
	CTECArray(int size);
	virtual ~CTECArray();

};


#endif /*Model_CTECARRAY_H_ */
