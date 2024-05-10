#include <iostream>

void insertion_sort(int num_list[])
{
    for (int i = 1; i < 5 ; i++)
    {
        int elected = num_list[i];
        int j = i - 1;

        while ( (j>= 0) && (elected < num_list[j]))
        {
            num_list[j+1] = num_list[j];
            j--;
        }
        if (j != i-1) {
            num_list[j + 1] = elected;
        }
    }
}



int main()
{
    int  num_list[] = { 5, 4, 2, 1, 3 };
    insertion_sort(num_list);

    for (int n = 0; n < 5; n++) {
        std::cout << num_list[n] << ", ";
    }
    std::cout << '\n';
}
