import HeapADT.java

//implementation using int, maxheap
class Heap<int, V> implements HeapADT {
    private ArrayList<PriorityElement<int, V>> heap;
    Heap() {
        heap = new ArrayList<PriorityElement<int, V>>();
    }
    public V peek() {
        if (!heap.isEmpty()) {
            return heap[heap.size()-1];
        }
        return null;//no object found.
    }
}
class Test {
    void main() {

    }
}