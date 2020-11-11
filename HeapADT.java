//priority element with priority queue
class PriorityElement<T, V> {
    public T priority;
    public V value;
    public PriorityElement(T priority, V value);
}
//interface describing heap abstract data type
//will implement with arraylist
interface HeapADT<P, V> {
    public void add(Pair<P, V>);//insert at end of arraylist
    public V remove();
    public V peek();
    public Array toArray();//convert to array
    public ArrayList toArrayList();//convert to arrayList based on priorities.
    private int leftChild(int n);
    private int rightChild(int n);
    private void bubbleUp(int n);
    private void bubbleDown(int n);
    //may want these private implementations for versions that don't use numbers. 
    //we might want one that compares the alphabetical order of strings, for example.
    private boolean greaterThan(P a, P b);
    private boolean lessThan(P a, P b);
    private boolean equal(P a, P b);
    //public void remove
}