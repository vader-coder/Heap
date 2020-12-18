#include "Heap.h"
using namespace std;

//get index of parent, left child, or right child of node
//within the array list that represents a heap. 
int Heap::parent(int index) {
    return (index+1)/2-1;
}
int Heap::leftChild(int index) {
    return (index+1)*2-1;
}
int Heap::rightChild(int index) {
    return (index+1)*2;
}
bool Heap::isLeaf(int index) {
    if (index+1 > this->size/2) {
        return true;
    }
    return false;
}