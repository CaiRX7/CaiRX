#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int  scsjs();

int main() {
	freopen("out.txt", "w", stdout);  // ������д��out.dat�ļ���
	int i, j, m[100];
	srand((unsigned  int )time(NULL)) ;    //��ʱ���������������
	for (int s = 1; s <= 1000; s++) {
		for (i = 0; i < 7; i++) {
			if (i <= 6) {
				m[i] = scsjs();
				for (j = 0; j < i; j++)
					if (i > 0 && m[i] == m[j])    //�жϵ�i�������Ƿ���֮ǰ�������غ�
						while (m[i] == m[j])      // ����غϣ��������������
							m[i] = scsjs();
			} else
				m[i] = rand() % 16 + 1;          //ȡģ����
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

