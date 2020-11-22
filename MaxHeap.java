class MaxHeap<Int, string> extends Heap {
    public boolean isOutOfOrder(int childIndex, int parentIndex) {
        //child priority greater than parent 
        if (list[childIndex].priority > list[parentIndex].priority)) {
            return true;
        }
        return false;
    }
}
