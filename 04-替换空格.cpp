//// 题目：请实现一个函数，把字符串中的每个空格替换成"%20"。例如输入“We are happy.”，
//// 则输出“We%20are%20happy.”。
//#include<iostream>
//#include<cstring>
//using namespace std;
////length为字符数组的总容量
//void ReplaceBlank(char string[], int length){
//	if (string == nullptr || length < 0)
//	{
//		return;
//	}
//	//originalLength为字符串string的实际长度
//	int originalLength = 0;
//	int numberOfBlank = 0;
//	int i = 0;
//	while (string[i] !='\0')
//	{
//		originalLength++;
//		if (string[i] == ' ')
//		{
//			numberOfBlank++;
//		}
//		i++;
//	}
//	//开始扩容newLength
//	int newLength = originalLength + numberOfBlank * 2;
//	if (newLength > length)
//	{
//		return;
//	}
//	//一个指针移到原末尾，一个指针移到扩容后的末尾
//	int indexOfOriginal = originalLength;
//	int indexOfNew = newLength;
//	while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
//	{
//		if (string[indexOfOriginal] == ' ')
//		{
//			string[indexOfNew--] = '0';
//			string[indexOfNew--] = '2';
//			string[indexOfNew] = '%';
//		}
//		else
//		{
//			string[indexOfNew] = string[indexOfOriginal];
//		}
//		indexOfNew--;
//		indexOfOriginal--;
//	}
//}
//// ====================测试代码====================
//void Test(char* testName, char str[], int length, char expected[])
//{
//	if (testName != nullptr)
//		printf("%s begins: ", testName);
//
//	ReplaceBlank(str, length);
//
//	if (expected == nullptr && str == nullptr)
//		printf("passed.\n");
//	else if (expected == nullptr && str != nullptr)
//		printf("failed.\n");
//	else if (strcmp(str, expected) == 0)
//		printf("passed.\n");
//	else
//		printf("failed.\n");
//}
//
//// 空格在句子中间
//void Test1()
//{
//	const int length = 100;
//
//	char str[length] = "hello world";
//	Test("Test1", str, length, "hello%20world");
//}
//
//// 空格在句子开头
//void Test2()
//{
//	const int length = 100;
//
//	char str[length] = " helloworld";
//	Test("Test2", str, length, "%20helloworld");
//}
//
//// 空格在句子末尾
//void Test3()
//{
//	const int length = 100;
//
//	char str[length] = "helloworld ";
//	Test("Test3", str, length, "helloworld%20");
//}
//
//// 连续有两个空格
//void Test4()
//{
//	const int length = 100;
//
//	char str[length] = "hello  world";
//	Test("Test4", str, length, "hello%20%20world");
//}
//
//// 传入nullptr
//void Test5()
//{
//	Test("Test5", nullptr, 0, nullptr);
//}
//
//// 传入内容为空的字符串
//void Test6()
//{
//	const int length = 100;
//
//	char str[length] = "";
//	Test("Test6", str, length, "");
//}
//
////传入内容为一个空格的字符串
//void Test7()
//{
//	const int length = 100;
//
//	char str[length] = " ";
//	Test("Test7", str, length, "%20");
//}
//
//// 传入的字符串没有空格
//void Test8()
//{
//	const int length = 100;
//
//	char str[length] = "helloworld";
//	Test("Test8", str, length, "helloworld");
//}
//
//// 传入的字符串全是空格
//void Test9()
//{
//	const int length = 100;
//
//	char str[length] = "   ";
//	Test("Test9", str, length, "%20%20%20");
//}
//
//int main(int argc, char* argv[])
//{
//	Test1();
//	Test2();
//	Test3();
//	Test4();
//	Test5();
//	Test6();
//	Test7();
//	Test8();
//	Test9();
//
//	return 0;
//}