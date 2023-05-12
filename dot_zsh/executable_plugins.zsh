if [[ ! -f "$zi_home/bin/zi.zsh" ]]; then
    print -P "%F{33}▓▒░ %F{220}Installing %F{33}Z-SHELL%F{220} A Swiss Army Knife for Zsh (%F{33}z-shell/zi%F{220})…%f"
    command mkdir -p "$zi_home" && command chmod g-rwX "$zi_home"
    command git clone https://github.com/z-shell/zi.git "$zi_home/bin" && \
        print -P "%F{33}▓▒░ %F{34}Installation successful.%f%b" || \
        print -P "%F{160}▓▒░ The clone has failed.%f%b"
fi

# Loading ZI
source "${zi_home}/bin/zi.zsh"
autoload -Uz _zi
(( ${+_comps} )) && _comps[zi]=_zi

# Annexes (extensions) for ZI. Adds ice modifiers:
#   - patch-dl: Download and apply patches. ice: `dl` `patch`
#   - bin-gem-node: Executable not on PATH. `fbin` ice
zi light-mode for \
    z-shell/z-a-patch-dl \
    z-shell/z-a-bin-gem-node

## Plugins
ZSH_AUTOSUGGEST_HIGHLIGHT_STYLE="fg=1"
zi ice id-as="autosuggestions"; zi light zsh-users/zsh-autosuggestions

# Completions
zi ice wait lucid blockf id-as="zsh-completions"
zi light zsh-users/zsh-completions

zi snippet PZT::modules/completion
zstyle ':completion:*' completer _complete _match _expand

zi wait lucid light-mode depth=1 for \
  pick="autopair.zsh" atload="autopair-init" hlissner/zsh-autopair \
  pick="async.zsh" mafredri/zsh-async

# Fuzzy Finder package (from Zsh-Packages/fzf) (ctrl + T)
zi pack"default+keys" for fzf

zi ice wait
zi snippet OMZP::dirhistory

zi ice wait
zi snippet $ZSH/scripts/utils/web-search.zsh

zi ice wait
zi light hlissner/zsh-autopair

# bitwarden auto export session
zi ice wait
zi light Game4Move78/zsh-bitwarden

zi ice wait 
zi light tom-auger/cmdtime

zi ice wait
zi light jgogstad/passwordless-history

zi ice wait
zi light o1001100/ssh-connect

zi ice wait
zi light MichaelAquilina/zsh-you-should-use

export YSU_IGNORED_ALIASES=("ls" "ll" "cd.." "pdw", "git")
export YSU_HARDCORE=1

# check that you are not in docker or a server avoid in headless installs
if [ -z "$DISPLAY" ] && [ -z "$SSH_CLIENT" ]; then
  echo "Not in a gui server"
else
  zi ice wait
  zi light MichaelAquilina/zsh-auto-notify
fi

## History search
# ctrl-r
zi light-mode for \
  z-shell/H-S-MW \
  zsh-users/zsh-history-substring-search

# ZI plugin for diff-so-fancy https://github.com/z-shell/zsh-diff-so-fancy
zi ice wait lucid as'program' pick'bin/git-dsf'
zi load z-shell/zsh-diff-so-fancy

# Theming

# Using normal load works
zi depth=1 lucid nocd for \
    romkatv/powerlevel10k

# zi ice wait
# zi light tom-doerr/zsh_codex

# zi ice wait
# zi light RobSis/zsh-completion-generator

# # autocompletion additions + fast-syntax-highlighting + zsh-autosuggestions
# zi wait lucid for \
#   atinit'ZI[COMPINIT_OPTS]=-C; zicompinit; zicdreplay' \
#     zsh-users/zsh-syntax-highlighting \
#   blockf \
#     zsh-users/zsh-completions \
#   atload"!_zsh_autosuggest_start" \
#     zsh-users/zsh-autosuggestions

# Syntax highlight must be the last one
zi wait lucid for id-as="fast-highlight" \
  atinit"ZI[COMPINIT_OPTS]=-C; zicompinit; zicdreplay" \
    z-shell/F-SY-H

# load after syntax highlighting to prevent "= is not a valid identifier" error
zi ice wait
zi light arzzen/calc.plugin.zsh
