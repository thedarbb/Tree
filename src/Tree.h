/*
 * Tree.h
 *
 *  Created on: Jan 7, 2016
 *      Author: thedarbb
 */

#ifndef TREE_H_
#define TREE_H_

class Tree {
private:
	Node* _root;
public:
	void traverse(Node* node);
	Tree();
	virtual ~Tree();
};

#endif /* TREE_H_ */
