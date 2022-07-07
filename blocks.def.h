//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/    /*Update Signal*/
	{" ",		"xkb-switch",							0,                     1},
	{"",		"curl http://wttr.in/Moscow?format='%x%t'|grep -v Unknown",	600,                   0},
	{"u:",		"checkupdates | wc -l",						600,                   0},
	{"d:",		"printf \"%.2f\n\" $(curl -s rub.rate.sx/1USD | bc)",		1800,                  0},
	{"t:", 		"sensors | sed -e 's/temp1: *\\(.*\\)  .*/\\1/;t;d'",		10,                    0},
	{"b:", 		"scripts/battery.sh",						10,                    0},
	{"",		"date '+%d.%m.%Y %H:%M'",					60,                    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
