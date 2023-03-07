
#include <iostream>
#include <scripts/array.hpp>

// write a test script
// that uses the ArrayList

int main()
{
    ArrayList<int> list(10);
    list.append(10);
    list.append(20);

    for (int i = 0; i < list.size; i++)
    {
        std::cout << list.get(i) << std::endl;
    }

    // popping an item and output it
    std::cout << "Popping: " << list.get(list.size - 1) << std::endl;

    // inserting an item at index 2 and outputting it
    list.insert(30, 2);
    std::cout << "Inserting: " << list.get(2) << std::endl;

    // clearing the list
    list.clear();
    std::cout << "List size: " << list.size << std::endl;
}
