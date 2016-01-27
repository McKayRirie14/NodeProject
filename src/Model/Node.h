/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: mrir2917
 */

#ifndef SRC_CONTROLLER_NODE_H_
#define SRC_CONTROLLER_NODE_H_

class Node
{
private:
	Type value;			//Container for the value stored in the node.
	Node * pointers;	//Pointer to the array of Nodes that are linked to this Node.
public:
	Node();
	virtual ~Node();
	Type getValue();
	Node * getPointers();
};

#endif /* SRC_CONTROLLER_NODE_H_ */

