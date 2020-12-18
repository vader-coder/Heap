#include <iostream>

template <P, V>//priority, value
class Heap {
    public:
       //return value with highest priority
        V peek();
        V remove();
        int size();
        void insert(P priority, V value);

    private:
        std::vector<std::pair<P, V>> nodeArrayList;
        int size;
        
        //index of parent and children in heap, respectively. 
        int parent(int index);
        int leftChild(int index);
        int rightChild(int index);
        bool isLeaf(int index);
        
        virtual bool isOutOfOrder(int parent, int child) = 0;
        //this method will tell you whether a parent and their child are out of order or not.
};
