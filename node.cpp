#include "node.hpp"

/*
class Node
{
    public:
        int data;
        Node* prev;
        Node* next;
    public:
        Node();
        Node(const int& value)
            :data(value),prev(nullptr),next(nullptr){}
        Node(const Node& node) {
            this->data = node.data;
            prev = node.prev;
            next = node.next;
        }
};*/
Node::Node()
	:data(0),
	prev(nullptr),
	next(nullptr) {}

Node::Node(const int& value)
    :data(value),
	prev(nullptr),
	next(nullptr) {}

Node::Node(const Node& node) {
    this->data = node.data;
    prev = node.prev;
    next = node.next;
}

