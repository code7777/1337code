/*
Design a HashMap without using any built-in hash table libraries.

Implement the MyHashMap class:

MyHashMap() initializes the object with an empty map.

void put(int key, int value) inserts a (key, value) pair into the HashMap. 

If the key already exists in the map, update the corresponding value.

int get(int key) returns the value to which the specified key is mapped, 
or -1 if this map contains no mapping for the key.

void remove(key) removes the key and its corresponding value if the map contains the mapping for the key.*/

public class MyHashMap {

    int[] map;

    public MyHashMap() {

        map = new int[1000001];
    }
    
    public void Put(int key, int value) {
       map[key] = value + 1;

    }
    
    public int Get(int key) {
        
        return map[key] - 1;
        
        
    }
    
    public void Remove(int key) {
        map[key] = 0;
        
    }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.Put(key,value);
 * int param_2 = obj.Get(key);
 * obj.Remove(key);
 */