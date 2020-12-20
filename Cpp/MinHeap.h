#include "Heap.h"

class MinHeap<int, V> : public Heap<P, V>{
    private:
        bool isOutOfOrder(int parent, int child) {
            if (this->nodeArrayList[parent].priority < this->nodeArrayList[child].priority) {
                return true;
            }
            return false;
        }
}