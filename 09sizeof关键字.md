## 2.2 sizeof 关键字
作用：利用sizeof 关键字可以统计数据类型所占内存大小
语法：sizeof(数据类型) 或者 sizeof(变量)

示例
```cpp
sizeof(short);
sizeof(int);
sizeof(long);
sizeof(long long);
int a = 10;
sizeof(a);

std::cout << "int 占用空间: " << sizeof(int) << std::endl;
std::cout << "int 占用空间: " << sizeof(a) << std::endl;


```
整型大小比较
short < int <= long < long long

todo: 测试linux 64下long 有多大