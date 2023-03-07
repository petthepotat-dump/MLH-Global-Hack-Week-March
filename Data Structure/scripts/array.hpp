
#include <stdlib.h>

template <typename T>
struct ArrayList
{
    T *start;
    int size;

    ArrayList(int size)
    {
        this->size = size;
        start = (T *)malloc(size * sizeof(T));
        std::fill(start, start + size, 0);
        // fill the allocated memoery with 0
    }

    // methods
    T get(int index)
    {
        return start[index];
    }

    void append(T value)
    {
        start[size] = value;
        size++;
    }

    void pop()
    {
        // leave the last blob to random memory
        size--;
    }

    void pop(int index)
    {
        // take out index and shift the rest
        for (int i = index; i < size; i++)
        {
            start[i] = start[i + 1];
        }
        size--;
    }

    void insert(T value, int index)
    {
        // shift the rest and insert value at index
        for (int i = size; i > index; i--)
        {
            start[i] = start[i - 1];
        }
        start[index] = value;
        size++;
    }

    void clear()
    {
        // free the memory
        free(start);
        size = 0;
    }
};
