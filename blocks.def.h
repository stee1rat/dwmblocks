//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/        /*Command*/                                                /*Update Interval*/    /*Update Signal*/
	{" ",            "xkb-switch",                                             0,                     1},
	{"",             "curl https://wttr.in/?format='%c%t'|grep -v Unknown",    600,                   0},
	{"","echo $(checkupdates | wc -l)\" updates\"",                              600,                   0},
	{"USD/RUB: ",        "printf \"%.2f\n\" $(curl -s rub.rate.sx/1USD | bc)",     1800,                  0},
	{"CPU: ",        "sensors | sed -e 's/Tdie: *\\(.*\\)  .*/\\1/;t;d'",      10,                    0},
	{"",             "date '+%d.%m.%Y %H:%M'",                                 60,                    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//static char delim[] = "  ";
static char delim[] = " | ";
static unsigned int delimLen = 5;
