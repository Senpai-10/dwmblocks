//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define uptime "$HOME/wm/dwmblocks/scripts/uptime.sh"
#define layout "$HOME/wm/dwmblocks/scripts/layout.sh"
#define network "$HOME/wm/dwmblocks/scripts/network.sh"
#define volume "$HOME/wm/dwmblocks/scripts/volume.sh"
#define temp "$HOME/wm/dwmblocks/scripts/temp.sh"
#define cpu_usage "$HOME/wm/dwmblocks/scripts/cpu_usage.sh"
#define ram_usage "$HOME/wm/dwmblocks/scripts/ram_usage.sh"
#define updates "$HOME/wm/dwmblocks/scripts/updates.sh"
#define date "date '+%Y/%m/%d %A %I:%M:%S %p '"


static const Block blocks[] = {
	/*Icon*/  /*Command*/  /*Update Interval*/ /*Update Signal*/
	{ "",   	uptime,     	5,   				0 },
	{ "", 		layout,     	5,   				0 },
	{ "", 		network,    	5,   				0 },
	{ "", 		volume,     	5,   				0 },
	{ "", 		temp,       	5,   				0 },
	{ "", 		cpu_usage,  	5,   				0 },
	{ "", 		ram_usage,  	1,   				0 },
	{ "",   	updates,    	5,   				0 },
	{ "", 		date,			5,	 				0 },
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
