//// 题目：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
//// 输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。例如数组
//// {3, 4, 5, 1, 2}为{1, 2, 3, 4, 5}的一个旋转，该数组的最小值为1。
//#include <cstdio>
//#include <exception>
//
//int MinInOrder(int* numbers, int index1, int index2);
//
//int Min(int* numbers, int length){
//	if (numbers == nullptr || length <= 0)
//	{
//		throw new std::exception("invalid parameters");
//	}
//	int index1 = 0;
//	int index2 = length - 1;
//	//将该值设为index1而不是任意值是因为如果移动完后依旧是一个递增数组，最后返回的就是index1了
//	int indexMid = index1;
//	while (numbers[index1] >= numbers[index2])
//	{
//		//相邻时，可以得出结果
//		if (index2 - index1 == 1)
//		{
//			indexMid = index2;
//			break;
//		}
//		indexMid = (index1 + index2) / 2;
//		//如果三个数指向的数组相同，就按序查找
//		if (numbers[index1] == numbers[index2] && numbers[indexMid] == numbers[index1])
//		{
//			return MinInOrder(numbers,index1,index2);
//		}
//		if (numbers[indexMid] >= numbers[index1])
//		{
//			index1 = indexMid;
//		}
//		else if (numbers[indexMid] <= numbers[index1]){
//			index2 = indexMid;
//		}
//	}
//	return numbers[indexMid];
//} 
////遇到1 0 1 1 1或者 1 1 1 0 1
//int MinInOrder(int* numbers, int index1, int index2){
//	int result = numbers[index1];
//	for (int i = index1 + 1; i <= index2; i++)
//	{
//		//找到第一个比它小的就是最小值，这个方法所有情况适用，但是效率低
//		if (result > numbers[i])
//		{
//			result = numbers[i];
//		}
//	}
//	return result;
//}
//
//// ====================测试代码====================
//void Test(int* numbers, int length, int expected)
//{
//	int result = 0;
//	try
//	{
//		result = Min(numbers, length);
//
//		for (int i = 0; i < length; ++i)
//			printf("%d ", numbers[i]);
//
//		if (result == expected)
//			printf("\tpassed\n");
//		else
//			printf("\tfailed\n");
//	}
//	catch (...)
//	{
//		if (numbers == nullptr)
//			printf("Test passed.\n");
//		else
//			printf("Test failed.\n");
//	}
//}
//
//int main(int argc, char* argv[])
//{
//	// 典型输入，单调升序的数组的一个旋转
//	int array1[] = { 3, 4, 5, 1, 2 };
//	Test(array1, sizeof(array1) / sizeof(int), 1);
//
//	// 有重复数字，并且重复的数字刚好的最小的数字
//	int array2[] = { 3, 4, 5, 1, 1, 2 };
//	Test(array2, sizeof(array2) / sizeof(int), 1);
//
//	// 有重复数字，但重复的数字不是第一个数字和最后一个数字
//	int array3[] = { 3, 4, 5, 1, 2, 2 };
//	Test(array3, sizeof(array3) / sizeof(int), 1);
//
//	// 有重复的数字，并且重复的数字刚好是第一个数字和最后一个数字
//	int array4[] = { 1, 0, 1, 1, 1 };
//	Test(array4, sizeof(array4) / sizeof(int), 0);
//
//	// 单调升序数组，旋转0个元素，也就是单调升序数组本身
//	int array5[] = { 1, 2, 3, 4, 5 };
//	Test(array5, sizeof(array5) / sizeof(int), 1);
//
//	// 数组中只有一个数字
//	int array6[] = { 2 };
//	Test(array6, sizeof(array6) / sizeof(int), 2);
//
//	// 输入nullptr
//	Test(nullptr, 0, 0);
//
//	return 0;
//}
