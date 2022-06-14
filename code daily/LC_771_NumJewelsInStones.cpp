#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
	int lengthJew = jewels.size();
	int lengthSto = stones.size();
	int num = 0;
	for (int i = 0; i < lengthJew; i++)
	{
		for (int j = 0; j < lengthSto; j++)
		{
			if (stones[j] == jewels[i])
			{
				num++;
			}
		}
	}
	return num;
}
