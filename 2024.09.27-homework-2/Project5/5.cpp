#include<iostream>

int main(int argc, char* argv[])
{
	int l1 = 0;
	int w1 = 0;
	int h1 = 0;
	scanf_s("%d", &l1);
	scanf_s("%d", &w1);
	scanf_s("%d", &h1);

	int l2 = 0;
	int w2 = 0;
	int h2 = 0;
	scanf_s("%d", &l2);
	scanf_s("%d", &w2);
	scanf_s("%d", &h2);

	int lc = 0;
	int wc = 0;
	int hc = 0;
	scanf_s("%d", &lc);
	scanf_s("%d", &wc);
	scanf_s("%d", &hc);

	int l1m = 0;
	int w1m = 0;
	int l2m = 0;
	int w2m = 0;
	int lcm = 0;
	int wcm = 0;

	if (l1 < w1) {
		l1m = w1;
		w1m = l1;
	}
	else {
		l1m = l1;
		w1m = w1;
	}
	
	if (l2 < w2) {
		l2m = w2;
		w2m = l2;
	}
	else {
		l2m = l2;
		w2m = w2;
	}

	if (lc < wc) {
		lcm = wc;
		wcm = lc;
	}
	else {
		lcm = lc;
		wcm = wc;
	}

	if ((h1 + h2) <= hc && l1m <= lcm and w1m <= wcm && l2m <= lcm && w2m <= wcm) {
		printf("YES");
	}
	else if (l1m <= lcm && w1m <= wcm && l2m <= lcm && w2m <= wcm && h1 <= hc && h2 <= hc){
		if (l1m <= lcm && w1m <= wcm) {
			if ((w2m <= lcm - l1m && l2m <= wcm) || (w2m <= wcm - w1m && l2m <= lcm) || (l2m <= lcm - l1m && w2m <= wcm) || (l2m <= wcm - w1m && w2m <= lcm)){
				printf("YES");
			}
			else if (w1m <= lcm && l1m <= wcm) {
				if ((l2m <= wcm - l1m && w2m <= lcm) || (l2m <= lcm && w2m <= wcm - l1m) || (l2m <= lcm - w1m && w2m <= wcm) || (w2m <= lcm - w1m && l2m <= wcm)) {
					printf("YES");
				}
				else {
					printf("NO");
				}
			}
			else {
				printf("NO");
			}
		}
		else {
			printf("NO");
		}
	}
	else {
		printf("NO");
	}


	return EXIT_SUCCESS;
}