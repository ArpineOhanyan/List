/*
class Iterator
{
    public:
        Node* iterator;
    private:
        void next();
        void prev();
    public:
        Iterator();
        Iterator(Node* node);
        Iterator(const Iterator& itr);
        Iterator& operator++();
        Iterator operator++(int);
        Iterator& operator--();
        Iterator operator--(int);
        bool operator==(const Iterator& itr);
};

*/
#include "iterator.hpp"

void Iterator::next() {
    if(iterator == nullptr) {
        return;
	}
    else {
		iterator =  iterator->next;
	}
}

void Iterator::prev() {
    if(iterator == nullptr) {
        return;
	}
    else {
		iterator =  iterator->prev;
    }
}

Iterator::Iterator()
	:iterator(nullptr) {}

Iterator::Iterator(Node* node)
	:iterator(node) {}

Iterator::Iterator(const Iterator& itr)
	:iterator(itr.iterator) {}

Iterator& Iterator::operator++() {
	next(); 
	return *this;
}

Iterator Iterator::operator++(int) {
	auto tmp(*this); 
	operator++();
   	return tmp;
}

Iterator& Iterator::operator--() {
	prev(); 
	return *this;
}

Iterator Iterator::operator--(int) {
	auto tmp(*this); 
	operator--(); 
	return tmp;
}

int& Iterator::operator*() {
	return iterator->data;
}

Iterator& Iterator::operator->() {
	return *this;
}
bool Iterator::operator==(const Iterator& itr) {
	return iterator == itr.iterator;
}

bool Iterator::operator!=(const Iterator& itr) {
    return !(iterator == itr.iterator);
}

