/*
 * erow 
 * for control led
 */

/*
 * Misc boot support
 */
#include <common.h>
#include <command.h>



int do_led (cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	ulong	addr, rc;
	int     rcode = 0;

	if (argc < 2)
		return cmd_usage(cmdtp);

	printf ("## Application terminated, rc = 0x%lX\n", rc);
	return rcode;
}

/* -------------------------------------------------------------------- */

U_BOOT_CMD(
	led, CONFIG_SYS_MAXARGS, 1,	do_led,
	"led dev 1/0",
	"addr [arg ...]\n    - start application at address 'addr'\n"
	"      passing 'arg' as arguments"
);


