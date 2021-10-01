//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",    "~/Programming/Suckless/dwmblocks/scripts/music",               				    1,  	0},

	{"",	"~/Programming/Suckless/dwmblocks/scripts/volume",									0,		10},

/*    {" ",    "~/Programming/Suckless/dwmblocks/scripts/price xmr \"Monero\" 🔒",           	1200,   10}, */

    {"",    "~/Programming/Suckless/dwmblocks/scripts/vpn",     		       					0,      10},

    {"",    "setxkbmap -print | awk -F'+' '/xkb_symbols/ {print $2}'",     					 	0,  	10},

	{"",	"~/Programming/Suckless/dwmblocks/scripts/forecast",								1200,	10},

    {"",    "netspeed",                                                         				5,      0},

    {"CPU: "    , "~/Programming/Suckless/dwmblocks/scripts/cpu_usage",							5,      0},

	{"RAM: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",						5,		0},

	{"", "date '+%a %b %d %H:%M:%S'",															1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
