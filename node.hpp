class Node
{
    public:
        int data;
        Node* prev;
        Node* next;
    public:
        Node();
        Node(const int& value);
        Node(const Node& node);
};

