//Ĭ���Ѷ����˳���L��elem���Ѿ�����õ�˳��ṹ��lengthΪ������ĳ������ͣ�ͷ�ļ�ʡ�ԡ�
void delete(SqList &L, ElemType a, ElemType b)
{
	int i=0, k=1;
	while (i<L.length)
	{
		if (L.elem[i]>=a&&L.elem[i]<= b)
		{
			k++;
		}
		else
		{
			L.elem[i-k] = L.elem[i];
		}
		i++;
	}
	L.length = L.length -k;
}