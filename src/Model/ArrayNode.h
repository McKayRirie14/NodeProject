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
class ArrayNode : pubic Node<Type>
{
private:
	ArrayNode * next;
public:
	ArrayNode();
	ArrayNode(Type value);
	ArrayNode(Type value, ArrayNode * next );
	virtual ~ArrayNode();
}

#endif /* MODEL_ARRAYNODE_H_ */
