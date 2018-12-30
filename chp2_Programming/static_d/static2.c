#include <stdio.h>

int function() {
	int var = 5;	
	static int static_var = 123;
	printf("[Inside function] var @ %p = %d", &var, var);
	printf("[Inside function] static_var @ %p = %d", &static_var, static_var);

	var ++;
	static_var++;
}

int main() {
	int i;
	for (i=1; i<10; i++) {
		function();
	}
}

