#include <iostream>
#include <deque>

int main()
{
    std::deque<int> my_deque;

    my_deque.push_back(2);
    my_deque.push_back(4);
    my_deque.push_front(1);

    my_deque[2] = 3; // A deque<> is a random-access sequence container

    std::cout << "There are { " << my_deque.size()  << " } elements in my_deque:" << std::endl;

    for (int element : my_deque) //for write in reduction mode
    {
        std::cout << "{ " << element << " }" << std::endl;
    }

}

/*
There are { 3 } elements in my_deque:
{ 1 }
{ 2 }
{ 3 }
*/
