
elements = []
#taking the array elements as input
no_of_elements = eval(input("Enter the number of elements you wish to sort: "))
for i in range(0, no_of_elements):
    print("Enter element ", i + 1, ":")
    elements.append(eval(input().strip()))
print("Before sorting: ", elements)
#calculating the minimum element in array and exchanging it with element at position i
for i in range(0, no_of_elements - 1):
    position = i
    for j in range(i + 1, no_of_elements):
        if elements[position] > elements[j]:
            position = j
    if position != i:
        temp = elements[i]
        elements[i] = elements[position]
        elements[position] = temp
#printing the sorted array
print("After sorting: ",elements)


# In[ ]:




