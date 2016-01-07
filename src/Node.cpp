/*
 * Node.cpp
 *
 *  Created on: Jan 7, 2016
 *      Author: thedarbb
 */

#include "Node.h"

Node::Node(string name): _name(name), _next(NULL) {
	// TODO Auto-generated constructor stub

}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

void Node::add(Node* node) {

	if(_firstChild == NULL) //the list is empty
	{
		_firstChild = node;
		_lastChild = node;
	}else //The list is not empty
	{
		_lastChild->_next = node;
		_lastChild = node;
	}
}

Node *Node::getNext()
{
	return _next;
}

string Node::getName()
{
	return _name;
}

