#include <stdio.h>

//sizeof operator applied to measure element size of array

size_t total_elements(int *array, size_t array_size);

int main(void)
{
    int list[] = {1,2,3,4};

    //direct form:
    printf("number of elements on the array: %lu\n",
           (sizeof(list)/sizeof(list[0])));

    //function form (sizeof(array) only works locally, not on passed pointer):
    printf("number of elements on the array: %lu\n",
           total_elements(list, sizeof(list)));
}

size_t total_elements(int *array, size_t array_size)
{
    return array_size/sizeof(*array);
}