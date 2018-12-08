#include "task4.h"

char * sum(char *x, char *y) {
	int len_x = strlen(x);
	int	len_y = strlen(y);
	int len_z;
	char * z, * res;
	int x_iter, y_iter, z_iter;
	int curr_sum = 0;
	int prev = 0;
	if (len_x > len_y)
		len_z = len_x + 2;
	else
		len_z = len_y + 2;
	z = new char[len_z];
	z[len_z - 1] = '\0';
	x_iter = len_x-1;
	y_iter = len_y-1;
	z_iter = len_z-2;
	while(x_iter >= 0 || y_iter >= 0) {
		if (x_iter >= 0 && y_iter >= 0)
			curr_sum = x[x_iter] + y[y_iter] - 2 * 48 + prev;
		else
			if (x_iter >= 0)
				curr_sum = x[x_iter] - 48 + prev;
			else
				curr_sum = y[y_iter] - 48 + prev;
		if (curr_sum > 9)
			prev = 1;
		else
			prev = 0;
		z[z_iter] = (char)(curr_sum % 10 + 48);
		curr_sum = 0;
		x_iter--;
		y_iter--;
		z_iter--;	
	}
	if (prev == 1) {
		z[0] = (char)(prev + 48);
		res = new char[len_z];
		for (int i = 0; i < len_z; i++)
			res[i] = z[i];
	}
	else {
		res = new char[len_z - 1];
		for (int i = 0; i < len_z - 1; i++)
			res[i] = z[i + 1];
	}
	
	return res;
}