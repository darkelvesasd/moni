class Solution {
public:
    string convert(string s, int numRows) {
        string s1;
	int n = s.length();
	int d = 2 * numRows - 2;
	if (numRows == 1)
	{
		return s;
	}
	for (int i = 0; d*i<n; i++)
	{
		 s1.push_back(s[i * d]);
	}
	for (int i = 1; i < numRows - 1; i++)
	{
		for (int j=0;j*d+i<n;j++)
		{
			s1.push_back( s[j * d + i]);
			if ((j + 1) * d - i < n)
			{
				s1.push_back(s[(j + 1) * d - i]);
			}
		}
	}
	for (int i = 0; i * d + numRows - 1 < n; i++)
	{
		s1.push_back( s[i * d+ numRows -1]);
	}
    return s1;
    }
};
