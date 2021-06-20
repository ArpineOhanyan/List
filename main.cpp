#include "list.hpp"

int main()
{
    List l;
    assert(0 == l.size());
    List* f = new List(5,7);
    f->erase(0);
    std::cout << *f << std::endl;
    delete f;
    l.push_front(4);
    l.push_back(9);
    l.push_front(0);
    std::cout << l << std::endl;
    for (Iterator itr = l.begin(); itr != l.end(); ++itr) {
        std::cout << *itr << " ";
    }  std::cout << std::endl;
    return 0;
}

