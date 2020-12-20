#include "Heap.h"
using namespace std;

V Heap::peek() {
    if (this->nodeArrayList.size() > 0) {
        return this->nodeArrayList[0];
    }
    throw new runtime_error("Heap is Empty.");
}

int Heap::size() {
    return this->nodeArrayList.size();
}

bool Heap::isEmpty() {
    if (this->size() > 0) {
        return false;
    }
    return true;
}

V Heap::remove() {
    int size = this->size()
    if (size > 1) {
        swap(0, size-1);
        Node *ret = this->nodeArrayList.pop_back();
        bubbleDown(0);
        return ret->value;
    }
    else if (size == 1) {
        return this->nodeArrayList.pop_back();
    }
}

V Heap::insert(P priority, V value) {
    this->nodeArrayList.push_back(Node(priority, value));
    bubbleUp(nodeArrayList->size()-1);
}
