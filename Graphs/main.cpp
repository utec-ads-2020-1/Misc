#include <iostream>

using namespace std;
//      r
//1 2 3 4 5 6 7 8 9 10

template <typename T>
class Iterator {
    vector<Node<T>*> stack;
    int posisition = 0;

public:
    Iterator() = default

    Iterator(Node<T>* current) {
        // 1 2 3 4 5 6 7 8 9 10
    }

    Iterator operator++() {
        /*auto current = stack.top()
        stack.addAll(getNext(current))*/
        position++;
    }

    T operator*() {
        return vector[position]->data;
    }
}

int main(int argc, char *argv[]) {
    BST tree;
    //add multiple values

    auto it = tree.begin();

    //add multiple values
    //remove multiple values

    while (it != tree.end()) {
        cout << (*it).first << endl;
    }

    return EXIT_SUCCESS;
}