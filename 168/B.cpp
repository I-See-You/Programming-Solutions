#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i,flag=1;
	string s;
	while (getline(cin,s))
	{
		for (i=0;i<s.size()&&s[i]==' ';i++);
		if (s[i]=='#')
		{
			if (!flag)
				cout << endl;
			cout << s << endl;
			flag=1;
		}
		else
		{
			for (i=0;i<s.size();i++)
				if (s[i]!=' ')
					cout << s[i];
			flag=0;
		}
	}
	if (!flag)
		cout << endl;
	return 0;
}