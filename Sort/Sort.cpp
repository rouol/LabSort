#include <iostream>
#include "Sort.h"

/*
template<typename T>
void Sort(Sequence<T>& arr, ISorter<T>*&& sort = new BubbleSort<T>{})
{
    (*sort)(arr);
    delete sort;
}

template<typename T>
void Sort(Sequence<T>& arr, const ISorter<T>*& sort = new BubbleSort<T>{})
{
    (*sort)(arr);
}
*/

template<typename T>
void Sort(Sequence<T>& arr, ISorter<T>* sort = new BubbleSort<T>{})
{
    (*sort)(arr);
}

int main()
{
    int n;
    std::cin >> n;
    ArraySequence<int> sequence(n);
    for (int i = 0; i < n; i++) {
        std::cin >> sequence.Get(i);
    }
    std::cout << &sequence << std::endl;
    Sort(sequence, new SelectionSort<int>{});
    std::cout << &sequence;
}