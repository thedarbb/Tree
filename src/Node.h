/*
 * Node.h
 *
 *  Created on: Jan 7, 2016
 *      Author: thedarbb
 */

#ifndef NODE_H_
#define NODE_H_

#include <string>
using namespace std;

class Node {
private:
	string _name;
	Node* _firstChild;
	Node* _lastChild;
	Node* _next;
public:
	void addChild(Node* node);
	Node(string name);
	virtual ~Node();
	string getName();
	Node *getNext();
	friend class Tree;
};

#endif /* NODE_H_ */
