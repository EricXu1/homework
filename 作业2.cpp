DataType min_seq(PSeqList palist) {    /*��ǿ�˳����е���С����Ԫ��*/
	DataType min;
	inti;
	min = palist - ��element[0];    /*��ʼ��min*/
	for (i = 1; i��palist - ��n; i++)    /*min�б�������ǵ�ǰ����С����*/
		if (min��palist - ��element[i])
			min = palist - ��elemellt[i];
	return min;
}