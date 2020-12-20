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

//swap nodes at two indecie in array list.
void Heap::swap(int index1, int index2) {
    Node* temp = this->nodeArrayList[index1];
    this->nodeArrayList[index1] = this->nodeArrayList[index2];
    this->nodeArrayList[index2] = *temp;
}

//index of highest priority between parent and children
int Heap::indexOfHighestPriority(int parentIndex, int child1Index, int child2Index) {
    if (isOutOfOrder(parentIndex, child1Index)) {
        if (isOutOfOrder(child1Index, child2Index)) {
            return child2Index;
        }
        return child1Index;
    }
    else if (isOutOfOrder(parentIndex, child2Index)) {
        return child2Index;
    }
    return parentIndex;
}

//bubble up index as long as out of order with parent. 
void Heap::bubbleUp(int index) {
    int parent = parent(index);
    //have isOutOfOrder check if parent exists. 
    while (isOutOfOrder(parent, index)) {
        swap(parent, index);
        index = parent;
        parent = parent(index)
    }
}

void Heap::bubbleDown(int index) {
    if (!isLeaf(index)) {//has children
        int leftChild = leftChild(index);
        int rightChild = rightChild(index);
        int lastIndex = this->nodeArrayList.size()-1;
        //if left child exists, check if it is greater than its parent.
        //for right child to exist, so must left. 
        if (rightChild <= lastIndex) {
            int indexOfHighestPriorityNode = indexOfHighestPriority(index, leftChild, rightChild);
            if (indexOfHighestPriorityNode != index) {
                swap(index, indexOfHighestPriorityNode);
                bubbleDown(indexOfHighestPriorityNode);
            }
        }//if only one child, must be left. 
        else if(isOutOfOrder(index, leftChild)) {
            swap(index, leftChild);
            bubbleDown(leftChild);
        }
    }
}
