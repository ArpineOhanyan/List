#pragma once

#include "node.hpp"

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
		int& operator*();
		Iterator& operator->();
        bool operator==(const Iterator& itr);
		bool operator!=(const Iterator& itr);
};

