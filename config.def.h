/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant     = 0;
static int topbar      = 1;    /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy       = 1;    /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int incremental = 0;    /* -r  option; if 1, outputs text each time a key is pressed */
static int colorprompt = 1;    /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int centered    = 0;    /* -c option; centers dmenu on screen */
static int min_width   =  500; /* minimum width when centered */
static int max_width   = 1000; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"terminus:pixelsize=12"
};
static const char *symbol_1 = "«";
static const char *symbol_2 = "»";
static const char *prompt  = NULL; /* -p  option; prompt to the left of input field */
static const char *dynamic = NULL; /* -dy option; dynamic command to run on input change */
static const char *colors[SchemeLast][2] =
{                           /*    fg         bg   */
	[Prompt             ] = { "#000000", "#FF0000" },
	[SchemeHp           ] = { "#000000", "#FFFFFF" },
	[SchemeNorm         ] = { "#FFFFFF", "#000000" },
	[SchemeNormHighlight] = { "#00FFFF", "#000000" },
	[SchemeSel          ] = { "#000000", "#FFFF00" },
	[SchemeSelHighlight ] = { "#000000", "#FF00FF" },
	[SchemeOut          ] = { "#FFFF00", "#000000" },
	[SchemeOutHighlight ] = { "#00FFFF", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
/* -h option; minimum height of a menu line */
static unsigned int     lineheight   = 12;
static unsigned int min_lineheight   = 12;
static unsigned int top_lineoffset   = 16;
static unsigned int sides_lineoffset =  2;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;

/* Size of the window border */
static unsigned int border_width = 1;
