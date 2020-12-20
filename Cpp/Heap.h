#include <iostream>

template <class P, V>//priority, value
class Heap {
    public:
       //return value with highest priority
        V peek();
        V remove();
        void insert(P priority, V value);
        int size();
        bool isEmpty();

    private:
        std::vector<Node<P, V>> nodeArrayList;
        int size;
        
        //index of parent and children in heap, respectively. 
        int parent(int index);
        int leftChild(int index);
        int rightChild(int index);
        bool isLeaf(int index);
        
        //this method will tell you whether a parent and their child are out of order or not.
        virtual bool isOutOfOrder(int parent, int child) = 0;
        //returns index of element with highest priority. 
        int indexOfHighestPriority(int parentIndex, int child1Index, int child2Index);
        
        void bubbleDown(int index);
        void bubbleUp(int index);
        void swap(int index1, int index2);
};

//node containing prioirity and value. 
template <P, V>
class Node {
    public:
        P priority;
        V value;
        Node(P priority, V value) {
            this->priority = priority;
            this->value = value;
        }
    
}