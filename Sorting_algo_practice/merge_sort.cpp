
#include <vector>
#include <iostream>

using std::vector;



void merge(vector<int>& arr, int s, int m, int e) {
    vector<int> l = {arr.begin() + s, arr.begin() + m + 1};
    vector<int> r = {arr.begin() + m + 1 , arr.begin() + e + 1};
    int ir = 0, il = 0, index = s;
    while (ir < r.size() && il < l.size()) {
        if (l[il] <= r[ir])
            arr[index] = l[il++];
        else
            arr[index] = r[ir++];
        index++;
    }
    while (il < l.size())
        arr[index++] = l[il++];
    while (ir < r.size())
        arr[index++] = r[ir++];
}


void mergeSort(vector<int>& nums ,  int start, int  end) {
    if (start - end == 0)
        return ;
    int  mid = (start + end) / 2;
    mergeSort(nums, start, mid);
    mergeSort(nums, mid + 1, end);
    merge(nums, start, mid, end);
}

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() != 0)
            mergeSort(nums, 0 , nums.size() - 1);
        return nums;
    }
};

int main() {
    vector<int> arr = {5 , 1, 3, 2, 4};
    vector<int> sorted =  Solution().sortArray(arr);
    for (vector<int>::iterator it = sorted.begin(); it != sorted.end(); it++) {
        std::cout << *it << std::endl;
    }
    return (0);
}