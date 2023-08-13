<div align="center">
    <h1>【 Evangelospro's dotfiles 】</h1>
</div>

![](https://img.shields.io/github/last-commit/evangelospro/dotfiles?&style=for-the-badge&color=FFB1C8&logoColor=D9E0EE&labelColor=292324)
![](https://img.shields.io/github/stars/evangelospro/dotfiles?style=for-the-badge&logo=andela&color=FFB686&logoColor=D9E0EE&labelColor=292324)
![](https://img.shields.io/github/repo-size/evangelospro/dotfiles?color=CAC992&label=SIZE&logo=googledrive&style=for-the-badge&logoColor=D9E0EE&labelColor=292324)

![1.png](Pictures/showcase/1.png)

# ELARCH<a name="top"></a>
1. [How to apply?](#applying)
2. [Dependencies](#dependencies)
3. [Packages](#packages)
4. [Custom Arch Linux ISO with AUR packages batteries included](#custom-arch-linux-iso-with-aur-packages-batteries-included)
5. [Installation and Usage](#installation-and-usage)
6. [Sources / Inspiration](#sources-and-inspiration)

### My dotfiles can be applied with the below oneliner. BUT I highly recommend that you fork this repo and edit the files to your liking before applying them(using your GitHub username). <a name="applying"></a>
```
chezmoi init --apply Evangelospro
```

## Keybindings
### Hyprland
| Keybinding | Action |
| --- | --- |
| Windows + M | Exit Hyprland |

### Launch / Reload Applications
| Keybinding | Action |
| --- | --- |
| Windows + Enter | Launch Terminal |
| Windows + L | Lock Screen(swaylock) |
| Windows + Space | Launch launcher(ulauncher) |
| Windows + V | Open clipboard manager (wl-clipboard) |
| Windows + C | Select color from screen (hyprpicker) and copy it |
| Windows + E | Open file manager(nautilus) |
| Windows + R | Reload the bar on top (eww) |

### Close / Fullscreen / Kill Applications / Arrange monitors
| Keybinding | Action |
| --- | --- |
| ALT + F4 | Close focused window |
| CTRL + SHIFT + ESC | Kill window clicked on (xkill or windows taskmanager) |
| Windows + F | Toggle fullscreen on focused window |
| Windows + P | Arrange monitors (extend / duplicate) |

### Screenshot / OCR
| Keybinding | Action |
| --- | --- |
| prtsc | Take screenshot interactively (flameshot) |
| Windows + O | Copy text from screen with OCR (tesseract) |

### Move focus between windows in the current workspace
| Keybinding | Action |
| --- | --- |
| Windows + Arrow keys | Move focus to the direction of the arrow key |

### Rearrange windows in the current workspace
| Keybinding | Action |
| --- | --- |
| Windows + AWSD | Move focused window to the direction of the AWSD keys |

### Move Windows Between Monitors
| Keybinding | Action |
| --- | --- |
| Windows + SHIFT + Arrow keys | Move focused window to the monitor in the direction of the arrow key |

### Move Windows Between Workspaces
| Keybinding | Action |
| --- | --- |
| Windows + SHIFT + 1-9 | Move focused window to the workspace with the number pressed |
| Windows + 1-9 | Move to the workspace with the number pressed |

### Cycle through workspaces
| Keybinding | Action |
| --- | --- |
| Windows + TAB | Cycle through workspaces forward |
| Windows + SHIFT + TAB | Cycle through workspaces backward |

### Move window with mouse
| Keybinding | Action |
| --- | --- |
| Windows + Click and drag | Move window with mouse |

## Dependencies<a name="dependencies"></a>
### Packages
#### Arch packages listed and organized in the [packages](iso/archiso/all_packages.x86_64) file
#### Python packages
```
pip install -r requirements.txt
```

# Custom Arch Linux ISO with AUR packages batteries included
## Setup
```
Desktop Environment: Hyprland
Display Server: Wayland
Window Manager: Hyprland
Display Manager: SDDM
Terminal: Wezterm
Shell: Zsh
```

## Ways to get the ISO
### From the releases tab (automated build)
[![iso_build](https://github.com/Evangelospro/dotfiles/actions/workflows/buildISO.yml/badge.svg)](https://github.com/Evangelospro/dotfiles/actions/workflows/buildISO.yml)
#### Oneliner that gets you a ready-to-use iso with my dotfiles and packages
```
curl https://raw.githubusercontent.com/Evangelospro/dotfiles/main/iso/get-iso.sh|bash
ls iso
```
#### Manual download and verification
##### 1) Download all the files from the latest release
##### 2) Verify each part's sha256sum(all should return OK)
```
sha256sum --check *.part*.sha256
```
##### 3) Merge the parts together to get the iso
```
iso_name=$(\ls | grep -E '^ELARCH-*.iso.sha256$' | sed 's/.sha256//')
cat $(\ls | grep -E '^ELARCH-.*\.part[^.]*$') > $iso_name
```
##### 4) Verify the combined sha256sum
```
sha256sum --check $iso_name.sha256
```
### Manual Build
```
cd iso
./build.sh
```

## Installation and Usage
### 1) [Download](#ways-to-get-the-iso) the iso and flash it to a usb drive
### 2) Default user is `liveuser` and password is `liveuser` sign in with these after the iso has finished the initial downloads
### 3) A nice calamares installer is also included to guide you through the installation process, in case it didn't start automatically using the launcher shortcut from [above](#launch--reload-applications), you can start it manually by searching `install` in the launcher or by running `sudo calamares -d` in a terminal

### 4) After the installation is complete, you can login with your just created user and password and enjoy your new system!


# 🌟 Stars
- _Consider leaving a star if you liked the project! Thanks!_

[![Stars](https://starchart.cc/evangelospro/dotfiles.svg)](https://starchart.cc/evangelospro/dotfiles)

### Thanks to these awesome projects and many more!!! <a name="sources-and-inspiration"></a>
* [pipewire](https://archlinux.org/packages/extra/x86_64/pipewire/)
* [playerctl](https://www.archlinux.org/packages/extra/x86_64/playerctl/)
* [blueman](https://archlinux.org/packages/extra/x86_64/blueman/)
* [hyprland](https://aur.archlinux.org/packages/hyprland-git/)
* [swayidle](https://archlinux.org/packages/extra/x86_64/swayidle/)
* [envycontrol](https://github.com/bayasdev/envycontrol)
* [ALCI](https://alci.online/)
