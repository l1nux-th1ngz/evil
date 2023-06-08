# Editor
alias e="sed -i 's;</head>;<link rel=\"stylesheet\" href=\"vsc.css\"></head>;g' $EDITOR_DIR/resources/app/out/vs/code/electron-sandbox/workbench/workbench.html && code"

# Dotfiles
alias config='chezmoi cd && e .'
alias zshconfig="e $ZSH"

alias sudo='sudo '
alias please='sudo $(fc -ln -1)'

# VPNs

# HACKING TOOLS
alias villain="python3 $HACKING_TOOLS/Villain/Villain.py"
alias stego="$HackingSetupScripts/stego/stego"
alias steganabara="~/Desktop/HACKING/HACKING-TOOLS/Stego/Steganabara/run"
alias cerbrutus="python3 ~/.local/bin/cerbrutus/cerbrutus.py"
alias autorecon="autorecon --only-scans-dir --single-target"
alias rot13='tr '\''A-Za-z'\'' '\''N-ZA-Mn-za-m'\'
alias rot47='tr '\''\!-~'\'' '\''P-~\!-O'\'
alias rr='nc evangelospro.com 1337'
alias webserver='updog -p 8000'
alias penelope="/usr/bin/python3 /usr/bin/penelope/penelope.py"
alias pwncompile="gcc -fno-stack-protector -z execstack -no-pie"
alias ctfinit="python3 ~/Desktop/HACKING/CTF\ Automation/ctfinit.py"
alias mobsf="~/SCRIPTS/r ~/Desktop/HACKING/HACKING-TOOLS/Mobile/Mobile-Security-Framework-MobSF/run.sh"
alias burl="curl -x localhost:8080 -k "
alias frm="/usr/bin/rm -rf"
alias rm="$ZSH/scripts/utils/rm"
alias rmz="/usr/bin/rm *.zip"
alias pcapng-to-pcap="$HackingSetupScripts/pcapng-to-pcap"
alias gdb="gdb -n -x $XDG_CONFIG_HOME/gdb/init"
alias pwndbg='gdb -q -ex init-pwndbg "$@"'
alias hosts='sudo ~/SCRIPTS/hosts.sh'
alias chosts='echo "127.0.0.1 localhost"|sudo tee /etc/hosts'
alias navi-update="$ZSH/scripts/updaters/navi-updater.sh"
alias feroxbuster-dir="feroxbuster -e -u"
alias wpscan='wpscan -e ap,t,u --plugins-detection aggressive'
alias frida-init="adb connect 127.0.0.1:5555 && sleep && adb -s 127.0.0.1:5555 root && adb -s 127.0.0.1:5555 push $HACKING_TOOLS/Mobile/frida/frida-server /data/local/tmp/ && adb -s 127.0.0.1:5555 shell 'chmod 755 /data/local/tmp/frida-server' && adb -s 127.0.0.1:5555 shell '/data/local/tmp/frida-server &' "

# Grub
alias grub-update='sudo grub-mkconfig -o /boot/grub/grub.cfg'

# windows managers
alias restart-gnome="killall -3 gnome-shell"
alias restart-kde="killall -3 plasmashell"
alias hyprland-logs="cat /tmp/hypr/$(\ls -t /tmp/hypr/ | head -n 1)/hyprland.log"

alias copydir='pwd | tr -d '\n' |copy|paste'

# Listing
alias tree='tree -a -I .git --dirsfirst'
alias ls='lsd -hAFlt --group-dirs first --color=always'
alias l='lsd -hAFlt --group-dirs first --color=always'
alias lst='lsd -hAFlt --tree --group-dirs first --color=always'

# Servers /  SSH
alias ssh='wezterm ssh'
alias server='ssh evangelospro@evangelospro.com'
alias kasm='ssh ubuntu@kasm'
alias xsshunter='ssh ubuntu@xsshunter'
alias proxmox='sshm root@proxmox'
alias portainer='ssh evangelospro@portainer'
alias scripter='ssh evangelospro@scripter'
alias eraspberry1='ssh evangelospro@eraspberry1'

# Command replacemnts
alias cat='/usr/bin/bat'
alias top='btop'


# Command minimization

# GIT
alias g=git
alias ga='git add'
alias gcam='git commit -a -m'
alias git-update="find . -name .git -type d -print -prune -exec git --git-dir '{}' fetch --all ';'"

# ZSH
alias reload='exec zsh -l'
alias tobash='sudo chsh evangelospro -s /bin/bash && echo '\''Now log out.'\'
alias tozsh='sudo chsh evangelospro -s /bin/zsh && echo '\''Now log out.'\'

alias df='df -h'
alias diff='diff --color'
alias free='free -m'

# python / pip
alias p='python3'
alias pip='noglob pip3'
alias pipi='pip3 install'
alias pipir='pip3 install -r'
alias pipreq='pip3 freeze > requirements.txt'
alias pipua='pip3 list | cut -d " " -f1 | tail +3 | xargs pip3 install -U'

# PS
alias psa='ps auxf'
alias pscpu='ps auxf | sort -nr -k 3'
alias psgrep='ps aux | grep -v grep | grep -i -e VSZ -e'
alias psmem='ps auxf | sort -nr -k 4'

alias jq='jaq'
alias termbin='nc termbin.com 9999|copy'
alias which-command=whence
alias fd='fd --hidden --follow'
alias hexdump='od -A x -t x1z -v'
alias o='handlr open'
# alias clear="$ZSH/scripts/utils/clear.sh"
alias md='glow'
alias wget="wget -c --hsts-file=$XDG_DATA_HOME/wget-hsts"
alias timezone-update='sudo tzupdate'
alias perms="stat --format '%a'"
alias yarn="yarn --use-yarnrc $XDG_CONFIG_HOME/yarn/config"
alias svn="svn --config-dir $XDG_CONFIG_HOME/subversion"

# kdeconnect
# alias send-text="kdeconnect-cli -d $(kdeconnect-cli -a|cut -f 1) --share-text $@"
# alias send-file="kdeconnect-cli -d $(kdeconnect-cli -a|cut -f 1) --share-file $@"
# alias send-link="kdeconnect-cli -d $(kdeconnect-cli -a|cut -f 1) --share-link $@"


# Custom
alias upload="$ZSH/scripts/utils/upload"


# get fastest mirrors
alias ram='rate-mirrors --allow-root arch | sudo tee /etc/pacman.d/mirrorlist; paru -Syyu'

# Networking
alias ip='ip -color -brief'
alias wmonitor-off='sudo airmon-ng stop wlp4s0f3u3'
alias wmonitor-on='sudo airmon-ng start wlp4s0f3u3'
alias flush-cache='sudo killall -USR1 systemd-resolved'
alias enable-ping='sudo sysctl -w net.ipv4.icmp_echo_ignore_all=0'
alias disable-ping='sudo sysctl -w net.ipv4.icmp_echo_ignore_all=1'

# Package managment / cleanup
alias clear-cache='sudo rm -rf ~/.cache/*' # shows no mercy but it is cache right?
alias clean-docker='docker system prune -f'
alias clean-packages='sudo pacman -Rns $(pacman -Qtdq) && sudo \rm -rf /var/cache/pacman/pkg/*'
alias clear-font-cache="fc-cache -f -v"

# basics/typos
alias cd..='cd ..'
alias pdw="pwd"
alias sl='ls'
alias q='exit'
alias qq='exit'

# image utils
alias icat="wezterm imgcat"
alias rotate='jpegtran -perfect -rotate'
