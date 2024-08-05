#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string croakOfFrogs = "ccroak";
	int hash1[5] = { 0 };//当前
	int n = croakOfFrogs.length();
	for (int i = 0; i < n; i++)
	{
		switch (croakOfFrogs[i])
		{
		case 'c':
			if (hash1[4] == 0)
			{
				hash1[0]++;
			}
			else
			{
				hash1[4]--;
				hash1[0]++;
			}
			break;
		case'r':
			if (hash1[0] > 0)
			{
				hash1[1]++;
				hash1[0]--;
			}
			else
			{
				return -1;
			}
			break;
		case'o':
			if (hash1[1] > 0)
			{
				hash1[2]++;
				hash1[1]--;
			}
			else
			{
				return -1;
			}
			break;
		case'a':
			if (hash1[2] > 0)
			{
				hash1[3]++;
				hash1[2]--;
			}
			else
			{
				return -1;
			}
			break;
		case'k':
			if (hash1[3] > 0)
			{
				hash1[4]++;
				hash1[3]--;
			}
			else
			{
				return -1;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (hash1[i])
		{
			return -1;
		}
	}
	return hash1[4];
}
