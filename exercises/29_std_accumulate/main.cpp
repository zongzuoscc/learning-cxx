﻿#include "../exercise.h"
#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int accu(int a,int b)
{
    return a*b;
}

int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    // TODO: 调用 `std::accumulate` 计算：
    //       - 数据类型为 float；
    //       - 形状为 shape；
    //       - 连续存储；
    //       的张量占用的字节数
    // int size =
    int size=std::accumulate(shape,shape+4,1,accu);
    ASSERT(size == 602112, "4x1x3x224x224 = 602112");
    return 0;
}
