//// ��Ŀ����ʵ��һ�����������ַ����е�ÿ���ո��滻��"%20"���������롰We are happy.����
//// �������We%20are%20happy.����
//#include<iostream>
//#include<cstring>
//using namespace std;
////lengthΪ�ַ������������
//void ReplaceBlank(char string[], int length){
//	if (string == nullptr || length < 0)
//	{
//		return;
//	}
//	//originalLengthΪ�ַ���string��ʵ�ʳ���
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
//	//��ʼ����newLength
//	int newLength = originalLength + numberOfBlank * 2;
//	if (newLength > length)
//	{
//		return;
//	}
//	//һ��ָ���Ƶ�ԭĩβ��һ��ָ���Ƶ����ݺ��ĩβ
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
//// ====================���Դ���====================
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
//// �ո��ھ����м�
//void Test1()
//{
//	const int length = 100;
//
//	char str[length] = "hello world";
//	Test("Test1", str, length, "hello%20world");
//}
//
//// �ո��ھ��ӿ�ͷ
//void Test2()
//{
//	const int length = 100;
//
//	char str[length] = " helloworld";
//	Test("Test2", str, length, "%20helloworld");
//}
//
//// �ո��ھ���ĩβ
//void Test3()
//{
//	const int length = 100;
//
//	char str[length] = "helloworld ";
//	Test("Test3", str, length, "helloworld%20");
//}
//
//// �����������ո�
//void Test4()
//{
//	const int length = 100;
//
//	char str[length] = "hello  world";
//	Test("Test4", str, length, "hello%20%20world");
//}
//
//// ����nullptr
//void Test5()
//{
//	Test("Test5", nullptr, 0, nullptr);
//}
//
//// ��������Ϊ�յ��ַ���
//void Test6()
//{
//	const int length = 100;
//
//	char str[length] = "";
//	Test("Test6", str, length, "");
//}
//
////��������Ϊһ���ո���ַ���
//void Test7()
//{
//	const int length = 100;
//
//	char str[length] = " ";
//	Test("Test7", str, length, "%20");
//}
//
//// ������ַ���û�пո�
//void Test8()
//{
//	const int length = 100;
//
//	char str[length] = "helloworld";
//	Test("Test8", str, length, "helloworld");
//}
//
//// ������ַ���ȫ�ǿո�
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