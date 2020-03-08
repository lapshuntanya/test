#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Node{
public:
	Node<T>* prev;
	T info;
	Node<T>* next;
	

	Node(T a = 0) {
		info = a;
		next = prev = NULL;
	}
	~Node() {}
};


template <typename U>
class List{
private:
	Node<U>* head;
	Node<U>* current;
public:
	List() {
		head = current = NULL;
	}
	~List() {}

	 Node<U> *   getHead() {
		return head;
	}


	void add(U a) {
		Node<U> *el = new Node<U>(a);
		if (head == NULL) {
			head = current = el;
		}
		else {
			current->next = el;
			el->prev = current;
			current = el;
		}
	}

	void show() {
		Node<U> *el = head;
		while (el != NULL) {
			cout << el->info << " ";
			el = el->next;
		}
		cout << "\n--------------------------\n";
	}

	void showReverse() {
		Node<U>* el = current;
		while (el != NULL) {
			cout << el->info << " ";
			el = el->prev;
		}
		cout << "\n--------------------------\n";
	}

	void del(U a)
	{
		Node<U>* el =head;
		while (el!=NULL)
		{
			if (el->info == a)
			{
				if (el == head)
				{
					head = el->next;
					head->prev = NULL;
					delete el; break;
				}
				else if (el->next == NULL)
				{
					Node<U>* lprev = el->prev;
					lprev->next=NULL;
					delete el; break;
				}
				else
				{
					Node<U> * lprev = el->prev;
					Node<U> * lnext = el->next;
					lprev->next = lnext;
					lnext->prev = lprev;
					delete el; break;
				}
			}
			el = el->next;
		}
	}
};

 
 