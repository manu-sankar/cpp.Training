#include<iostream>

using namespace std;

char firstUniqueCharacter(char* s)
{
	int freqcount[256] = { 0 };
	int i = 0;

	while (s != '\0')
	{
		freqcount[s[i]]++;
		i++;
	}
	i = 0;
	while (s != '\0')
	{
		if (freqcount[i] == 1)
		{
			return s[i];
		}
		i++;
	}
	return ' ';
}

int main()
{
	char str[] = "appliedmaterials";
	char result = firstUniqueCharacter(str);
	if (result != ' ')
		cout << "First unique character: " << result << endl;
	else
		cout << "No unique character found." << endl;

	return 0;
}