//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    /* {"", "packages",		  		    60 * 10,5}, */
    /* {"", "backlight",   	    		0,		4}, */
    /* {"", "battery",     				5,		3}, */
    {"", "packages",		   		    60 * 10,2},
    {"", "crypto_prices",	   		    60 * 5, 3},
    {"", "temps",      		    	    30,		2},
    {"", "datestatus",  				60,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
static char delim = '|';
