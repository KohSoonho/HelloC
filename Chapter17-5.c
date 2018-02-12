# include <stdio.h>

int main (void)
{
	FILE *fp;
	
    // In csv file, elements are separated ",".
    // This file can be read exel or R.
	fp = fopen("test.csv", "w");
	fprintf(fp, "number, name, average\n");
	fprintf(fp, "No1, Nobita Nobi, 0\n");
	fprintf(fp, "No.2, Shizuka Minamoto, 90\n");
	fprintf(fp, "No.3, Takeshi Gouda, 40\n");
	fprintf(fp, "No.4, Suneo Honekawa, 70\n");
	fprintf(fp, "No.5, Hidetoshi Dekisugi, 100\n");
	
	return 0;
}
