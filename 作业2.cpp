//默认已定义好顺序表L，elem是已经定义好的顺序结构，头文件省略。
DataType min(PSeqList palist) 
{
	DataType min;
	int i;
	min = palist-＞elem[0];
	for (i = 1; i＜ palist - ＞n; i++)
		if (min＞palist - ＞elem[i])
		{
			min=palist - ＞elem[i];
		}
	return min;
}