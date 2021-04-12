//Modify this file to change what commands output to your statusbar, and recompile using the make command.


static const Block blocks[] = {
	/*Icon*/ /*Command*/	 /*Update Interval*/ /*Update Signal*/
	{ "", "$HOME/wm/dwmblocks/scripts/uptime.sh",   5,   0 },
	{ "", "$HOME/wm/dwmblocks/scripts/layout.sh",   5,   0 },
	{ "", "$HOME/wm/dwmblocks/scripts/network.sh",  5,   0 },
	{ "", "$HOME/wm/dwmblocks/scripts/volume.sh",   5,   0 },
	{ "", "$HOME/wm/dwmblocks/scripts/temp.sh",   	5,   0 },
	{ "", "$HOME/wm/dwmblocks/scripts/cpu_usage.sh",   5,   0 },
	{ "", "$HOME/wm/dwmblocks/scripts/ram_usage.sh",   1,   0 },
	{ "", "$HOME/wm/dwmblocks/scripts/updates.sh", 5, 0 },
	{ "", "date '+%Y/%m/%d %A %I:%M:%S %p '",		5,   0 },
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
