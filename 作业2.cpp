//Ĭ���Ѷ����˳���L��elem���Ѿ�����õ�˳��ṹ��ͷ�ļ�ʡ�ԡ�
DataType min(PSeqList palist) 
{
	DataType min;
	int i;
	min = palist-��elem[0];
	for (i = 1; i�� palist - ��n; i++)
		if (min��palist - ��elem[i])
		{
			min=palist - ��elem[i];
		}
	return min;
}