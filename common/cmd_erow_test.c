#include <common.h>

 int fbootk(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	const char *cmd;

	/* need at least two arguments */
	if (argc < 2)
		return cmd_usage(cmdtp);

	cmd = argv[1];

	if (strcmp(cmd, "init") == 0) {
		printf("int");
		return 0;
	}

	if (strcmp(cmd, "info") == 0) {
		return 0;
	}

	return cmd_usage(cmdtp);
}

U_BOOT_CMD(
	bootk,	2,	1,	fbootk,
	"bootk addr ",
	"bootk boot a kernel from addr");

