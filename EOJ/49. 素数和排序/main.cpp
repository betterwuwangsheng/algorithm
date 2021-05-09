#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

//数据结构体
struct Datum
{
	//定义 vector 存储高维数据
	//{1,2,3,100}
	vector<double> group;

	//类别
	string label;

	//距离
	double distance;
}; //别名

//产生随机小数
double randDouble(int min, int max)
{
	return (rand() % ((max - min) * 100 + min * 100)) / 100.0;
}

//比较大小
bool cmp(Datum a, Datum b)
{
	return a.distance < b.distance;
}

int main()
{
	int n, dimension;
	cout << "请输入数据的数量: " << endl;
	cin >> n;

	cout << "请输入数据的维数: " << endl;
	cin >> dimension;

	//创造随机数据
	//设置随机数种子
	srand((unsigned int)time(NULL));

	//创建数据集 -> n 个数据
	vector<Datum> train(n);

	//测试数据
	//Data test;

	/*for (int i = 0; i < n; ++i)
	{
		test.group.push_back(randDouble(10, 1000));
	}*/

	//数据的数量
	for (int i = 0; i < n; ++i)
	{
		//数据的维数
		for (int j = 0; j < dimension; ++j)
		{
			//产生随机小数
			//初始化 第 i 个数据的每一维数据的值
			train[i].group.push_back(randDouble(0, 100));
		}

		//初始化类别
		//i 为偶数
		if (i % 2 == 0)
		{
			train[i].label = "绿色";
		}
		else
		{
			train[i].label = "红色";
		}
	}

	////求距离
	//for (int i = 0; i < n; ++i)
	//{
	//	double sum = 0;
	//	for (int j = 0; j < dimension; ++j)
	//	{
	//		sum += (train[i].group[j] - test.group[j]) * (train[i].group[j] - test.group[j]);
	//	}

	//	//赋值
	//	train[i].distance = sqrt(sum);

	//	//cout << "距离: " << train[i].distance << " 类别: " << train[i].label << endl;
	//}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			cout<< train[i].group[j] << " ";
		}
		cout << train[i].label;
		cout << endl;
	}
	//排序
	/*sort(train.begin(), train.end(), cmp);

	for (int i = 0; i < n; i++)
	{
		cout << "距离: " << train[i].distance << " 类别: " << train[i].label << endl;
	}*/

	return 0;
}