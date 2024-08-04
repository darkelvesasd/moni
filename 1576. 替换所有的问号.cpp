class Solution {
public:
    string modifyString(string s) {
char j;
	for (int i=0;i<s.length();i++)
	{
		if (s[i] == '?')
		{
			for ( j='a'; j<='z'; j++)
			{
				if (i == 0)
				{
					if (s[i + 1] != j)
					{	s[i] = j;
					break;}
				}
				else if (i == s.length() - 1)
				{
					if (s[i - 1] != j)
					{
						s[i] = j;
						break;
					}
				}
				else if (s[i + 1] != j && s[i - 1] != j)
				{
					s[i] = j;
					break;
				}
			}
		}
	}
	return s;
    }
};
