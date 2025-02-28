#include"vectorclass.h"
#include<iostream>
using namespace std;

template <class T>
vectorclass<T>::vectorclass() {
    capacity = 1;
    current = 0;
    arr = new T[capacity];
   
}

template <class T>
void vectorclass<T>::push(T data) {
    // if the number of elements is equal to the
    // capacity, that means we don't have space to
    // accommodate more elements. We need to double the
    // capacity
    if (current == capacity) {
        T* temp = new T[2 * capacity];

        // copying old array elements to new array
        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }

        // deleting previous array
        delete[] arr;
        capacity *= 2;
        arr = temp;
    }

    // Inserting data
    arr[current] = data;
    current++;
}


template <class T>
void vectorclass<T>::push(int data, int index) {
    if (index == capacity)
        push(data);
    else
        arr[index] = data;
}


template <class T>
T vectorclass<T>::get(int index){
    // if index is within the range
    if (index < current) {
        return arr[index];
    }
}

template <class T>
void vectorclass<T>::pop() { 
    current--; 
} 

template <class T>
int vectorclass<T>::size() {
    return current;
}

template <class T>
int vectorclass<T>::getcapacity() {
    return capacity;
}

template <class T>
void vectorclass<T>::print() {
    for (int i = 0; i < current; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <class T>
vectorclass<T>::~vectorclass() {
    delete[] arr;
    arr = NULL;
}