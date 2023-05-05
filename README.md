# dotfiles 
## use chezmoi to apply them

![Hyprland](/hyprland.png)

### Packages needed
```
paru -S rustup chezmoi hyprland-git xdg-desktop-portal-hyprland-git grim polkit-gnome ffmpeg swaybg ttf-font-awesome \
rofi-git pavucontrol qt5ct zsh wev wl-clipboard wf-recorder kwallet-pam cliphist jaq ripgrep btop moreutils \
swaybg grimblast-git ffmpegthumbnailer playerctl dictd qtkeychain-qt6 flameshot-git batify2-git \
noise-suppression-for-voice lf spotify-player libdisplay-info spotifywm-git \
eww-wayland wlogout swaylock-effects-git sddm-git pamixer neofetch espanso-wayland-git webcord \
papirus-icon-theme-git swayosd-git dunst wezterm swayidle geticons udiskie python-pywal cpupower-git

### depreaceated 
```cargo install hyprsome```

#### USE

##### hyprload (plugin manager)
```curl -sSL https://raw.githubusercontent.com/Duckonaut/hyprload/main/install.sh | bash```

#### Manual eww build for system tray
=======
** NVIDIA ** !
nvidia-dkms nvidia-vaapi-driver-git
```

```
git clone https://github.com/elkowar/eww ~/.local/bin/eww-git
cd ~/.local/bin/eww-git
cargo build --release --no-default-features --features=wayland
ln -s ~/.local/bin/eww-git/target/release/eww ~/.local/bin
```

#### Nvidia drivers
nvidia-dkms nvidia-vaapi-driver-git

### Anything in the confs folder is a config file for a program (usually in etc), replace the file with the one in the confs folder at your own risk
