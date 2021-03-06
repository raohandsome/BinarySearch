// Bsearch.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
using namespace std;
void Bsearch(int *arr, int size, int num);

int main()
{
	int arr[16] = { 1,2,3,3,3,4,4,4,4,4,5,5,5,5,6,6 };
	Bsearch(arr, 16, 0);
	system("pause");
    return 0;
}

void Bsearch(int *arr, int size, int num)
{
	int low = 0;
	int high = size - 1;
	int mid = low + ((high - low) >> 1);
	while (low <= high)
	{
		
		if (arr[mid] == num)
		{
			int temp = mid;
			while (arr[temp] == num)
			{
				if (temp == 0)
				{
					cout << "第一个指定数字的下标是：" << temp  << endl;
					return;
				}
				temp--;
			}
			if (arr[temp] < num)
			{
				cout << "第一个指定数字的下标是：" << temp+1 << endl;
			}
			while (arr[mid] == num)
			{
				if (mid == size - 1)
				{
					cout << "最后一个指定数字的下标是：" << mid  << endl;
					return;
				}
				mid++;
			}
			if (arr[mid] > num)
			{
				cout << "最后一个指定数字的下标是：" << mid-1 << endl;
			}
			return;
		}
		else if (arr[mid] < num)
		{
			low = mid + 1;
			mid = low + ((high - low) >> 1);
		}
		else
		{
			high = mid - 1;
			mid = low + ((high - low) >> 1);
		}

	}
	cout << "此指定值不存在。" << endl;
}