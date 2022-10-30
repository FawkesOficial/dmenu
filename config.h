/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/*
  dmenu will first look for "colors.h" in "$HOME/.cache/wal/colors.h".
  If the file is not found, it will fallback to the file in "colors/colors.h".
  So, if you do not intend on using pywal, manually modify the "colors/colors.h" config file
  just like you would modify this file (config.h).
  See README for more info.
*/

#include <colors-wal-fawkes-dmenu.h>

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 20;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
