#include <iostream>
#include <cassert>

using namespace std;

int number() {
    int numberCount;
   cout << "Enter how many numbers you would like: ";
    cin >> numberCount;
    return numberCount;
}

void inputNumbers(int nums[], int numberCount) {
    for (int i = 0; i < numberCount; i++) {
        cout << "Enter a number: ";
        cin >> nums[i];
    }
}

void sortDescending(int nums[], int numberCount) {
    int temporary = 0;
    for (int j = 0; j < numberCount - 1; j++) {
        for (int i = 0; i < numberCount - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                temporary = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temporary;
            }
        }
    }
}

void calculateSums(int nums[], int numberCount, int& sum1, int& sum2) {
    sum1 = 0;
    sum2 = 0;
    for (int i = 0; i < numberCount; i++) {
        if (i % 2 == 0) {
            sum1 += nums[i];
        } else {
            sum2 += nums[i];
        }
    }
}

void test() {

    int nums1[] = {1, 2, 2, 1};
    int numberCount1 = 4;
    int sum1_1, sum2_1;
    sortDescending(nums1, numberCount1);
    calculateSums(nums1, numberCount1, sum1_1, sum2_1);
    assert(sum1_1 == 3);
    assert(sum2_1 == 3);

    int nums2[] = {10, 20, 20, 10};
    int numberCount2 = 4;
    int sum1_2, sum2_2;
    sortDescending(nums2, numberCount2);
    calculateSums(nums2, numberCount2, sum1_2, sum2_2);
    assert(sum1_2 == 30);
    assert(sum2_2 == 30);

    int nums3[] = {3, 1, 2};
    int numberCount3 = 3;
    int sum1_3, sum2_3;
    sortDescending(nums3, numberCount3);
    calculateSums(nums3, numberCount3, sum1_3, sum2_3);
    assert(sum1_3 == 4);
    assert(sum2_3 == 2);

    cout << "All tests passed!" << endl;
}

int main() {
    test();

    int numberCount = number();
    int* nums = new int[numberCount];
    inputNumbers(nums, numberCount);
    sortDescending(nums, numberCount);

    int sum1, sum2;
    calculateSums(nums, numberCount, sum1, sum2);

    cout << sum1 << " " << sum2 << endl;

    return 0;
}