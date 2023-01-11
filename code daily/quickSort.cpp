//
// Created by WuFenghong on 2023/1/9.
//
#include "../util.h"

int partition(vector<int>& nums, int low, int high){
    int pivot = nums[low];
    int pos = low;
    while(low < high) {
        while(low < high && nums[high] >= pivot) --high;
        while(low < high && nums[low] <= pivot) ++low;
        if(low < high) swap(nums[low],nums[high]);
    }
    swap(nums[pos],nums[low]);
    return low;
}

void quickSort(vector<int>& nums, int low, int high) {
    if(low > high) return;
    int pos = partition(nums,low,high);
    quickSort(nums,low,pos-1);
    quickSort(nums,pos+1,high);
}

int Q_partition(vector<int>& nums, int low, int high) {
    int pivot = nums[low];
    int i = low;
    int j = high;
    while(i != j){
        while(nums[j] >= pivot && j > i) j--;
        while(nums[i] <= pivot && j > i) i++;
        if(j > i) swap(nums[i],nums[j]);
    }
    swap(nums[low],nums[i]);
    return i;
}

void Quick_Sort(vector<int>& nums, int low, int high){
    if(low > high) return;
    int pos = Q_partition(nums, low, high);
    Quick_Sort(nums, low, pos - 1);
    Quick_Sort(nums, pos + 1, high);
}


void HeapAdjust(vector<int> &arr, int start, int end)
{
    int tmp = arr[start];
    for (int i = 2 * start + 1; i <= end; i = i * 2 + 1)
    {
        if (i < end&& arr[i] < arr[i + 1])//有右孩子并且左孩子小于右孩子
        {
            i++;
        }//i一定是左右孩子的最大值
        if (arr[i] > tmp)
        {
            arr[start] = arr[i];
            start = i;
        }
        else
        {
            break;
        }
    }
    arr[start] = tmp;
}

void HeapSort(vector<int> &arr, int len)
{
    //第一次建立大根堆，从后往前依次调整
    for(int i=(len-1-1)/2;i>=0;i--)
    {
        HeapAdjust(arr, i, len - 1);
    }
    //每次将根和待排序的最后一次交换，然后在调整
    int tmp;
    for (int i = 0; i < len - 1; i++)
    {
        tmp = arr[0];
        arr[0] = arr[len - 1-i];
        arr[len - 1 - i] = tmp;
        HeapAdjust(arr, 0, len - 1-i- 1);
    }
}

int main(){
    vector<int> nums{1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4};
    quickSort(nums,0,nums.size()-1);
    for(const auto& num : nums) cout << num << " ";
    cout << endl;
    Quick_Sort(nums,0,nums.size()-1);
    for(const auto& num : nums) cout << num << " ";
    cout << endl;
}