#!/usr/bin/env bash

# Refresh everything
sudo pacman -Syu --needed base-devel

# Install chaotic aur
echo "Setting up chaotic aur"
pacman-key --recv-key 3056513887B78AEB --keyserver keyserver.ubuntu.com
pacman-key --lsign-key 3056513887B78AEB
pacman -U 'https://cdn-mirror.chaotic.cx/chaotic-aur/chaotic-keyring.pkg.tar.zst'
pacman -U 'https://cdn-mirror.chaotic.cx/chaotic-aur/chaotic-mirrorlist.pkg.tar.zst'

if ! pacman -Qs git >/dev/null 2>&1; then
    sudo pacman -Sy --noconfirm git
fi

if ! pacman -Qs paru >/dev/null 2>&1; then
    git clone https://aur.archlinux.org/paru.git
    cd paru
    makepkg -si
    cd ..
    rm -rf paru
fi

if ! pacman -Qs chezmoi >/dev/null 2>&1; then
    paru -S --noconfirm chezmoi
fi

chezmoi init --apply Evangelospro

if ! pacman -Qs rebos >/dev/null 2>&1; then
    # use ~/.local/share/chezmoi/confs/etc/pacman.conf
    paru -S --noconfirm rebos --config ~/.local/share/chezmoi/confs/etc/pacman.conf
fi

rm -rf ~/.rebos-base
rebos setup
rebos gen commit "Install sync"
rebos gen current build
rebos gen tidy-up
