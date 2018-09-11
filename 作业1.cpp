//默认已定义好顺序表L，elem是已经定义好的顺序结构，length为定义过的长度整型，头文件省略。
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