int tinhtongcs(int n){
	int so=n;
	int S = 0;
	while(so>0){
	S = S+so%10;
	so=so/10;
	}
	return S;
}

int tinhchuvi(int a, int b, int c){
	int p = a+b+c;
	return p;
}