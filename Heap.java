//priority element with priority queue
class PriorityElement<T> {
    public T priority;
    public T value;
    public PriorityElement(T priority, T value);
}
//interface describing heap abstract data type
//will implement with arraylist
interface HeapADT<T> {
    public void add(T element);//insert at end of arraylist
    public int leftChild(int n);
    public int rightChild(int n);
    public void bubbleUp(int n);
    //public void remove
}