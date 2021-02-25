#include "pch.h"
#include "MyStr.h"
unsigned int strLen()
{
	int DlinnaStr=0;
	while (str[DlinnaStr]!='\0')
	{
		DlinnaStr++;
	}
	return DlinnaStr;
}
void strCpy(char *dest, const char *source)
{
	int len = 0;
	len=strLen(source);
	for (int i = 0; i <= len; i++) 
	{
		dest[i] = source[i];
	}
}
void strCat(char *dest, const char *source)
{
	int lenStr1=strLen(source);
	int lenStr2 = strLen(dest);
	int lenStrEnd = lenStr1 + lenStr2;
	int I = 0;
	while (lenStr2 <= lenStrEnd)
	{
		dest[lenStr2] = source[I];
		I++;
		lenStr2++;
	}
}
void strReverse(char *str)
{
	char buf[1];
	int lenStr = (strLen(str))-1;
	for (int i=0;(lenStr/2) > 0;i++)
	{
		buf[0] = str[i];
		str[i] = str[lenStr];
		str[lenStr] = buf[0];
		
		lenStr--;
	}
}
void strToUpper(char *str)
{
	int lenStr = strLen(str);
	char buf[1];
	int ASKICod=0;
	for(int i=0;i<lenStr;i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122)) 
		{
			buf[0] = str[i];
			ASKICod = buf[0];
			ASKICod = ASKICod - 32;
			str[i] = ASKICod;
		}

	}
}
void strToLower(char *str) 
{
	int lenStr = strLen(str);
	char buf[1];
	int ASKICod = 0;

	for (int i = 0; i < lenStr; i++)
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			buf[0] = str[i];
			ASKICod = buf[0];
			ASKICod = ASKICod + 32;
			str[i] = ASKICod;
		}
	}
}
int strStr(const char *str, const char *substr)
{
	int lenStr = strLen(str);
	int lenPodStr = strLen(substr);
	int iVxoda = 0;
	bool flag = 0;
	for (int i = 0; i < lenStr; i++)
	{
		if (flag == 0)
		{
			if (str[i] == substr[0])
			{
				iVxoda = i;
				for (int iPodStr = 0; iPodStr < lenPodStr; iPodStr++)
				{
					if (str[iVxoda + iPodStr] == substr[iPodStr])
					{
						flag = 1;
					}
					else
					{
						flag = 0;
					}
				}
			}
		}
		else
		{
			break;
		}
	}
	if (flag != 0) 
	{
		return iVxoda;
	}
	else
	{
		return -1;
	}
}
int strCmp(const char *str1, const char *str2)
{
	int lenStr1 = strLen(str1);
	int lenStr2 = strLen(str2);
	if (lenStr1 > lenStr2)
	{
		return 1;
	}
	if (lenStr1 < lenStr2)
	{
		return -1;
	}
	if (lenStr1 = lenStr2)
	{
		for (int i = 0; i < lenStr1; i++)
		{
			if (str1[i] == str2[i])
			{
				return 0;
			}
			if (lenStr1 > lenStr2)
			{
				return 1;
			}
			if (lenStr1 < lenStr2)
			{
				return -1;
			}

		}
	}
}
