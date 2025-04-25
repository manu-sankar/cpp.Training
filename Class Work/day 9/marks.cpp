#include<cstdio>
using namespace std;


int main() {
	int slno, id_01, id_02, id_03, id_04, id_05;
	float s1m1, s1m2, s1m3, s1m4, s2m1, s2m2, s2m3, s2m4, s3m1, s3m2, s3m3, s3m4, s4m1, s4m2, s4m3, s4m4, s5m1, s5m2, s5m3, s5m4;
	float  avg1, avg2, avg3, avg4, avg5;
	char name1[20], name2[20], name3[20], name4[20], name5[20];
	
	scanf("%d%f%f%f%f", &id_01, &s1m1, &s1m2, &s1m3, &s1m4);
	avg1 = (s1m1 + s1m2 + s1m3 + s1m4) / 4.0;

	slno = 1;
	for (int i = 0;i < 30;i++) {
		printf("=");
	printf("\n");
	printf("slno|id|name");
	for (int i = 0;i < 30;i++) {
		printf("=");
		printf("\n%03d|%03d\t|", slno++);
		printf('=' * 30);
	}
	}
	return 0;



}