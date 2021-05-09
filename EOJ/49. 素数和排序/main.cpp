#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

//���ݽṹ��
struct Datum
{
	//���� vector �洢��ά����
	//{1,2,3,100}
	vector<double> group;

	//���
	string label;

	//����
	double distance;
}; //����

//�������С��
double randDouble(int min, int max)
{
	return (rand() % ((max - min) * 100 + min * 100)) / 100.0;
}

//�Ƚϴ�С
bool cmp(Datum a, Datum b)
{
	return a.distance < b.distance;
}

int main()
{
	int n, dimension;
	cout << "���������ݵ�����: " << endl;
	cin >> n;

	cout << "���������ݵ�ά��: " << endl;
	cin >> dimension;

	//�����������
	//�������������
	srand((unsigned int)time(NULL));

	//�������ݼ� -> n ������
	vector<Datum> train(n);

	//��������
	//Data test;

	/*for (int i = 0; i < n; ++i)
	{
		test.group.push_back(randDouble(10, 1000));
	}*/

	//���ݵ�����
	for (int i = 0; i < n; ++i)
	{
		//���ݵ�ά��
		for (int j = 0; j < dimension; ++j)
		{
			//�������С��
			//��ʼ�� �� i �����ݵ�ÿһά���ݵ�ֵ
			train[i].group.push_back(randDouble(0, 100));
		}

		//��ʼ�����
		//i Ϊż��
		if (i % 2 == 0)
		{
			train[i].label = "��ɫ";
		}
		else
		{
			train[i].label = "��ɫ";
		}
	}

	////�����
	//for (int i = 0; i < n; ++i)
	//{
	//	double sum = 0;
	//	for (int j = 0; j < dimension; ++j)
	//	{
	//		sum += (train[i].group[j] - test.group[j]) * (train[i].group[j] - test.group[j]);
	//	}

	//	//��ֵ
	//	train[i].distance = sqrt(sum);

	//	//cout << "����: " << train[i].distance << " ���: " << train[i].label << endl;
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
	//����
	/*sort(train.begin(), train.end(), cmp);

	for (int i = 0; i < n; i++)
	{
		cout << "����: " << train[i].distance << " ���: " << train[i].label << endl;
	}*/

	return 0;
}