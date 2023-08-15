#define _CRT_SECURE_NO_WARNINGS

//移除元素
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

//说明:为什么返回数值是整数，但输出的答案是数组呢 ?
//请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。
//你可以想象内部操作如下 :

//int removeElement(int* nums, int numsSize, int val) 
//{
//    int src = 0, dst = 0;
//    while (src < numsSize)
//    {
//        if (nums[src] != val)
//        {
//            nums[dst++] = nums[src++];
//        }
//        else
//        {
//            src++;
//        }
//    }
//    return dst;
//}

//移除元素
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//说明 :
//为什么返回数值是整数，但输出的答案是数组呢 ?
//请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。
//你可以想象内部操作如下 :
//int removeElement(int* nums, int numsSize, int val) {
//    int src = 1, dst = 0;
//    while (src < numsSize)
//    {
//        if (nums[src] == nums[dst])
//        {
//            src++;
//        }
//        else
//        {
//            dst++;
//            nums[dst] = nums[src];
//            src++;
//        }
//    }
//    return dst + 1;
//}


//合并两个有序数组
//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。
//为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int end1 = m - 1, end2 = n - 1;
    int end = m + n - 1;
    while (end1 >= 0 && end2 >= 0)
    {
        if (nums1[end1] > nums2[end2])
        {
            nums1[end--] = nums1[end1--];
        }
        else
        {
            nums1[end--] = nums2[end2--];
        }
    }
    while (end2 >= 0)
    {
        nums1[end--] = nums2[end2--];
    }
}