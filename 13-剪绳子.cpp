//// 题目：给你一根长度为n绳子，请把绳子剪成m段（m、n都是整数，n>1并且m≥1）。
//// 每段的绳子的长度记为k[0]、k[1]、……、k[m]。k[0]*k[1]*…*k[m]可能的最大乘
//// 积是多少？例如当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此
//// 时得到最大的乘积18。
//#include <iostream>
//#include <cmath>
//
////动态规划
//int maxProductAfterCutting_solution1(int length){
//	if (length < 2)
//	{
//		return 0;
//	}
//	if (length == 2)
//	{
//		return 1;
//	}
//	if (length == 3)
//	{
//		return 2;
//	}
//	int* products = new int[length+1];
//	products[0] = 0;
//	products[1] = 1;
//	products[2] = 2;
//	products[3] = 3;
//
//	int max = 0;
//	for (int i = 4; i <= length; i++)
//	{
//		max = 0;
//		//只需要计算到一半，因为超过了一半计算的值是和前一半一样的
//		for (int j = 1; j <= i/2; j++)
//		{
//			int product = products[j] * products[i-j];
//			if (max < product)
//			{
//				max = product;
//			}
//			products[i] = max;
//		}
//	}
//	max = products[length];
//	delete[] products;
//	return max;
//}
//
////贪婪算法
//int maxProductAfterCutting_solution2(int length){
//	if(length < 2){
//		return 0;
//	}
//	if (length == 2)
//	{
//		return 1;
//	}
//	if (length == 3)
//	{
//		return 2;
//	}
//	//尽可能剪去长度为3的绳子
//	int timeOf3 = length / 3;
//	//当最后还剩长度为4的时候，不能再剪去3了，而是2*2
//	if (length - timeOf3*3 == 1)//全部分为长度为3的子段后，还剩1，就拿出一段3和剩下的1结合一下合为4
//	{
//		timeOf3 -= 1;
//	}
//	int timeOf2 = (length - timeOf3 * 3) / 2;//正好全部分成长度为3时，timeOf2就为0，余下2时timeOf2为1，余下1时timeOf2为2
//	
//	return (int)(pow(3, timeOf3))*(pow(2, timeOf2));
//}
//// == == == == == == == == == == 测试代码 == == == == == == == == == ==
//void test(const char* testName, int length, int expected)
//{
//	int result1 = maxProductAfterCutting_solution1(length);
//	if (result1 == expected)
//		std::cout << "Solution1 for " << testName << " passed." << std::endl;
//	else
//		std::cout << "Solution1 for " << testName << " FAILED." << std::endl;
//
//	int result2 = maxProductAfterCutting_solution2(length);
//	if (result2 == expected)
//		std::cout << "Solution2 for " << testName << " passed." << std::endl;
//	else
//		std::cout << "Solution2 for " << testName << " FAILED." << std::endl;
//}
//
//void test1()
//{
//	int length = 1;
//	int expected = 0;
//	test("test1", length, expected);
//}
//
//void test2()
//{
//	int length = 2;
//	int expected = 1;
//	test("test2", length, expected);
//}
//
//void test3()
//{
//	int length = 3;
//	int expected = 2;
//	test("test3", length, expected);
//}
//
//void test4()
//{
//	int length = 4;
//	int expected = 4;
//	test("test4", length, expected);
//}
//
//void test5()
//{
//	int length = 5;
//	int expected = 6;
//	test("test5", length, expected);
//}
//
//void test6()
//{
//	int length = 6;
//	int expected = 9;
//	test("test6", length, expected);
//}
//
//void test7()
//{
//	int length = 7;
//	int expected = 12;
//	test("test7", length, expected);
//}
//
//void test8()
//{
//	int length = 8;
//	int expected = 18;
//	test("test8", length, expected);
//}
//
//void test9()
//{
//	int length = 9;
//	int expected = 27;
//	test("test9", length, expected);
//}
//
//void test10()
//{
//	int length = 10;
//	int expected = 36;
//	test("test10", length, expected);
//}
//
//void test11()
//{
//	int length = 50;
//	int expected = 86093442;
//	test("test11", length, expected);
//}
//
//int main(int agrc, char* argv[])
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	test5();
//	test6();
//	test7();
//	test8();
//	test9();
//	test10();
//	test11();
//
//	return 0;
//}