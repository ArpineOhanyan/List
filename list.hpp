#pragma once

#include <iostream>
#include <cassert>
#include "iterator.hpp"

class List
{
    private:
        Node* head;
        Node* tail;
    public:
        int size() const;
        void insert (const int& pos, const int& value);
        void erase (const int& pos);
        void push_back(const int& value);
        void push_front(const int& value);
        int top_back();
        int top_front();
        void pop_back();
        void pop_front();
        Iterator begin();
        Iterator end();
    public:
        List();
        List(const int& count, const int& value);
        List(const List& other);
        ~List();
        List& operator=(const List& other);
        friend std::ostream& operator<<(std::ostream& out, const List& other);

};
