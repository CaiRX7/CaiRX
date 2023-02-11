#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int  scsjs();

int main() {
	freopen("out.txt", "w", stdout);  // 将输入写入out.dat文件中
	int i, j, m[100];
	srand((unsigned  int )time(NULL)) ;    //用时间做随机数的种子
	for (int s = 1; s <= 1000; s++) {
		for (i = 0; i < 7; i++) {
			if (i <= 6) {
				m[i] = scsjs();
				for (j = 0; j < i; j++)
					if (i > 0 && m[i] == m[j])    //判断第i个数字是否与之前的数字重合
						while (m[i] == m[j])      // 如果重合，重新生成随机数
							m[i] = scsjs();
			} else
				m[i] = rand() % 16 + 1;          //取模运算
		}
		for (i = 0; i < 7; i++)
			printf("%d   ", m[i]);
		printf("\n");
	}
	return 0;
	fclose(stdout);
}

int  scsjs() {
	return rand() % 33 + 1;
}

