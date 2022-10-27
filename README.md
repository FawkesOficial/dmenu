# My build of dmenu

---

## Added features

+ Adds the ability to launch specified commands such as **htop**, **ranger**, **cmus**, **cava**, etc. in your prefered terminal. See [Terminal Apps](#terminal-apps) section for more info.
+ Highlight search results.
+ Add a matching results number count.

---

## Terminal Apps

First, change the `$TERMINAL` variable in `dmenu_run` to your terminal (ex. $TERMINAL="**st**").

Terminal Apps should be specified in the config file using the following format: 

`{app-name} -name {app-name}`

for example, if we wanted to run **htop** as a terminal app using dmenu, we would add this line to `$XDG_CONFIG_HOME/dmenu/terminal-apps.config`:

`htop -name htop`

### dmenu will look for the config file in the following order:
1. `$XDG_CONFIG_HOME/dmenu/terminal-apps.config`
2. `~/.config/dmenu/terminal-apps.config`
3. `~/.dmenu-terminal-apps.config`

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
