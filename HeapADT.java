import java.util.*;
import java.lang.*;
import java.io.*;
//priority element with priority queue
class PriorityElement<T, V> {
    public T priority;
    public V value;
    public PriorityElement(T priority, V value) {
        this.priority = priority;
        this.value = value;
    }
}
//interface describing heap abstract data type
//will implement with arraylist
public abstract class HeapADT<P, V> {
    abstract public void add(Pair<P, V> pair);//insert at end of arraylist
    abstract public V remove();
    abstract public V peek();
    abstract public Pair<P,V> toArray();//convert to array
    abstract public ArrayList toArrayList();//convert to arrayList based on priorities.
    abstract int leftChild(int index);
    abstract int rightChild(int index);
    abstract void bubbleUp(int index);
    abstract void bubbleDown(int index);
    //may want these private implementations for versions that don't use numbers. 
    //we might want one that compares the alphabetical order of strings, for example.
    abstract boolean greaterThan(P a, P b);
    abstract boolean lessThan(P a, P b);
    abstract boolean equal(P a, P b);
    //public void remove
}