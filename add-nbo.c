#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(uint32_t argc, char *argv[])
{
	uint32_t a,b;
	
	FILE *fp1 = fopen(argv[1], "rb");
	FILE *fp2 = fopen(argv[2], "rb");

	if(fread(&a, sizeof(uint32_t),1,fp1)!=0)
		a = ntohl(a);
	
	if(fread(&b, sizeof(uint32_t),1,fp2)!=0)
		b = ntohl(b);

	printf("%d(%#x) + %d(%#x) = %d(%#x)\n",a,a,b,b,a+b,a+b);

	fclose(fp1);
	fclose(fp2);

	return 0;
}


