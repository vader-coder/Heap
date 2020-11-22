//import HeapADT.java.*
import java.util.*;
import java.lang.*;
import java.io.*;

class PriorityElement<P, V> {
    public P priority;
    public V value;
    public PriorityElement(P priority, V value) {
        this.priority = priority;
        this.value = value;
    }
}

//implementation using generics. can overload greater > , < to mean what you want. 
class Heap<P, V> {
    private ArrayList<PriorityElement<P, V>> list;
    private Heap() {
        list = new ArrayList<PriorityElement<P, V>>();
    }
    public V peek() {
        if (!list.isEmpty()) {
            return list[list.size()-1];
        }
        return null;//no object found.
    }
    private int parent(int index) {
        return (index-1)/2;
    }
    private int leftChild(int index) {
        return 2*index+1;
    }
    private int rightChild(int index) {
        return 2*index+2;
    }
    private isLeaf(int index) {
        if (index > list.size()-1) {
            return true;
        }
        return false;
    }
    public swap(int index1, int index2) {
        PriorityElement temp = list[index1];
        list[index1] = list[index2];
        list[index2] = temp;
    }
    public bubbleUp(int index) {
        int parent = parent(index);
        if (parent >= 0) {
            if (isOutOfOrder(list[index].priority, list[parent].priority)) {
                swap(index, parent);//if they are out of order, swap them. 
                bubbleUp(parent);//call recursively on parent index to keep bubbling up node
            }
        }
    }
    public add(P priority, V value) {
        list.add(new PriorityElement(priority, value));
        bubbleUp(list.size()-1);
    } 
}