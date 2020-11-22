class AlphabeticalHeap<String, string> extends Heap {
    public boolean isOutOfOrder(int childIndex, int parentIndex) {
        //child less than parent alphabetically
        if (list[childIndex].priority.compareTo(list[parentIndex].priority) < 0) {
            return true;
        }
        return false;
    }
}