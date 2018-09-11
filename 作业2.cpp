DataType min_seq(PSeqList palist) {    /*求非空顺序表中的最小数据元素*/
	DataType min;
	inti;
	min = palist - ＞element[0];    /*初始化min*/
	for (i = 1; i＜palist - ＞n; i++)    /*min中保存的总是当前的最小数据*/
		if (min＞palist - ＞element[i])
			min = palist - ＞elemellt[i];
	return min;
}