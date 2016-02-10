/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: mrir2917
 */

#ifndef SRC_MODEL_ARRAYNODE_H_
#define SRC_MODEL_ARRAYNODE_H_

#include "Node.h"

template <class Type>
class ArrayNode: public Node<Type>
{
private:
	ArrayNode<Type> * next;
public:
	ArrayNode();
	ArrayNode(Type value);
	ArrayNode(Type value, ArrayNode<Type> * next );
	virtual ~ArrayNode();
	ArrayNode<Type> * getNext();
	void setNext(ArrayNode<Type> * next);
};

#endif /* MODEL_ARRAYNODE_H_ */
