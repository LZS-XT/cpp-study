//#include<iostream>
//using namespace std;
//
////使用函数模板，选择排序，分别排序整形和字符型的数组
//template<class T>
//void mysort(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			T temp = arr[i];
//			arr[i] = arr[max];
//			arr[max] = temp;
//		}
//	}
//}
//template<class T>
//void printarray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	char carr[] = "cadegf";
//	int num = sizeof(carr) / sizeof(char);
//	mysort(carr, num);
//	printarray(carr, num);
//
//}
//
//void test02()
//{
//	int carr[] = {1,4,2,6,87,3,};
//	int num = sizeof(carr) / sizeof(int);
//	mysort(carr, num);
//	printarray(carr, num);
//
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//
//	return 0;
//}