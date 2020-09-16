#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elements[100], temp, no_of_elements, i, j, position;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &no_of_elements);
    // taking the array elements as input
    for(i = 0; i < no_of_elements; i++){
            printf("Enter element %d: ", i+1);
            scanf("%d", &elements[i]);
    }
    // calculating the minimum and exchanging the values
    for(i = 0; i < no_of_elements - 1; i++){
        position = i;
        for(j = i+1; j < no_of_elements; j++){
            if(elements[position] > elements[j]){
                    position = j;}}
        if(position != i){
            temp = elements[i];
            elements[i] = elements[position];
            elements[position] = temp;}
    }
	// printing the sorted array elements
    for(i = 0; i < no_of_elements; i++){
        printf("%d\n", elements[i]);}
    return 0;
}
