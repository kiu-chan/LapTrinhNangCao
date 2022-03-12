void sortAscending(float array[], int size)
{
    sort(array,array+size);
}
void reverseArray(float array[], int size)
{
    for(int i = 0; i < size/2; i++)
        swap(array[i],array[size-i-1]);
}
void sort(float array[], int size, bool isAscending)
{
    sortAscending(array, size);
    if(isAscending==false)
        reverseArray(array, size);
}