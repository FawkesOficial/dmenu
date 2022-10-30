# My build of dmenu

---

## Added features

+ Adds the ability to launch specified commands such as **htop**, **ranger**, **cmus**, **cava**, etc. in your prefered terminal. See [Terminal Apps](#terminal-apps) section for more info.
+ Pywal generated colorschemes compatibility. See [Pywal Colorschemes](#pywal-colorschemes) section for more info.
+ Highlight search results.
+ Add a matching results number count.

---

## Terminal Apps

First, change the `$TERMINAL` variable in `dmenu_run` to your terminal (ex. `TERMINAL=${TERMINAL:-"st"}`, this makes sure that if you already set $TERMINAL, this won't change it).

Terminal Apps should be specified in the config file using the following format: 

`{app-name} -name {app-name}`

for example, if we wanted to run **htop** as a terminal app using dmenu, we would add this line to the config file:

`htop -name htop`

### By default, dmenu will look for the config file in the following order:
1. `$XDG_CONFIG_HOME/dmenu/terminal-apps.config`
2. `~/.config/dmenu/terminal-apps.config`
3. `~/.dmenu-terminal-apps.config`

if this folder and/or file do not exist, create them.

*(if you don't create them, dmenu will still run, don't worry.)*

---

## Pywal Colorschemes

Because the "**highlight**" patch does not provide any color configuration flags like `-nb`, `-nf`, etc. and its colors can only be changed in `config.h`, you will have to copy the colorscheme template into pywal's template folder:

`cp colors/colors-wal-fawkes-dmenu.h.template $HOME/.config/wal/templates/colors-wal-fawkes-dmenu.h`

### After running pywal, you have to re-compile dmenu to apply the new colorscheme !!!

### If you do not wish to use pywal generated colorschemes,
modify `colors/colors-wal-fawkes-dmenu.h` just like you would `config.h`.


---

## Applied patches

+ [border](https://tools.suckless.org/dmenu/patches/border/)
+ [center](https://tools.suckless.org/dmenu/patches/center/)
+ [grid](https://tools.suckless.org/dmenu/patches/grid/)
+ [highlight](https://tools.suckless.org/dmenu/patches/highlight/)
+ [numbers](https://tools.suckless.org/dmenu/patches/numbers/)
+ [password](https://tools.suckless.org/dmenu/patches/password/)

---

## Contact

- [Github](https://github.com/FawkesOficial)
- [Twitter](https://twitter.com/FawkesOficial)
