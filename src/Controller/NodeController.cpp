/*
 * NodeController.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: mrir2917
 */

#include "NodeController.h"

NodeController::NodeController()
{
//	this->intNOde.setValue(5);
//	this->stringArrayNode.setValue("words are fun");
//	this->otherArrayNode.setValue(linked node");
//	stringArrayNode.setNext(&otherArrayNode);
	myStringArray = new CTECArray<string>(5);

}

NodeController::~NodeController()
{

}

void NodeController :: start()
{
//	cout << intNode.getVal() << endl;
//	cout << stringArrayNode.getValue() << endl;
//	cout << (*stringArraNode.getNext()).getValue() << endl;
	string first = "first";
	string second = "not second";
	string third = "trois";
	string fourth = "yon";
	string fifth = "cing";

	myStringArray->set(0, first);
	cout << myStringArray->get(0) << endl;
	myStringArray->set(1, second);
	myStringArray->set(2, third);
	myStringArray->set(3, fourth);
	myStringArray->set(4, fifth);

	for(int index = 0; index < myStringArray->getSize(); index++)
	{
		cout << "The contents at " << index " are " << myStringArray->get(index) << endl;
	}
}

