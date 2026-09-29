#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]) - 1;
    int key = 7; // 要查找的元素
    int mid = 0; // 记录中间元素的下标
    int find  = 0; // 记录是否找到该元素
    while(left <= right)
    {
        mid = (left + right) / 2;
        if(arr[mid] < key)
        {
            left = mid + 1;
        }
        else if(arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            find = 1; //既不小于也不大于，说明找到该元素，把1赋值给find
            break;
        }
    }
    if(find == 1)
{
    printf("找到了，下标是%d,\n数值是%d\n", mid,arr[mid]);
}
else
{
    printf("没有找到\n");
}
}