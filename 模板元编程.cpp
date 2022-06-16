////计算m的n次方
//#include <iostream>
////using namespace std;
//
//template<int m, int n>
//struct POWER {
//	static const size_t data = POWER<m, n - 1>::data * m;//递归调用
//};
////模板特化，终结递归
//template<int m>
//struct POWER<m, 0> {
//	static const size_t data = 1;
//};
//
//int main()
//{
//	POWER<100,10> p;
//	std::cout << p.data;
//};