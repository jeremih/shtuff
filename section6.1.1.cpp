

int fibo(void) {
	static int seq=0;
	static int prev=0;
	static int prev2=1;
	seq=prev2+prev;
	prev=prev2;
	prev2=seq;
	return prev;
}