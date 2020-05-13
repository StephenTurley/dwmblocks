//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    {"☀", "xbacklight | sed 's/\\..*//'",		    		0,		4},
    {"", "battery",                     					5,		3},
    {"🔊", "volume",                   				    	0,		2},
    {" ", "date +\"%A %d %b %Y %H:%M\"",					60,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
static char delim = ' ';
