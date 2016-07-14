char *month_name(int n);

char *month_name(int n) {
	static char *name[] = {
		"Invalid Month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December"
	};

	return (n < 1 || n > 12) ? name[0] : name[n];
}

main() {
	int n = 12323;
	char *month;
	month = month_name(n);
	printf("%s\n", month);
}
