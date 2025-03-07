#include <iostream>
#include <algorithm>

int main() {
    long long x1, x2, x3, x4;
    std::cin >> x1 >> x2 >> x3 >> x4;
    long long nums[4] = {x1, x2, x3, x4};
    std::sort(nums, nums + 4);
    long long s4 = nums[3]; // a + b + c
    long long a = s4 - nums[2]; // a = (a + b + c) - (b + c)
    long long b = s4 - nums[1]; // b = (a + b + c) - (a + c)
    long long c = s4 - nums[0]; // c = (a + b + c) - (a + b)
    std::cout << a << " " << b << " " << c << std::endl;
    return 0;
}
