/*
 * Tree.cpp
 *
 *  Created on: Jan 7, 2016
 *      Author: thedarbb
 */

#include "Tree.h"

Tree::Tree(): _root(NULL) {
	// TODO Auto-generated constructor stub

}

Tree::traverse(Node* node){
	cout << node -> name << endl;
	Node* i = node -> _firstChild;
	while(i != NULL)
	{
	     traverse(i);
	     i = i -> _next;
	}

}

Tree::~Tree() {
	// TODO Auto-generated destructor stub
}

