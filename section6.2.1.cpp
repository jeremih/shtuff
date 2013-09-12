

void switch_ints(int *i, int *j) {
	int k;
	int l;
	k=*j;
	l=*i;
	*i=k;
	*j=l;
}