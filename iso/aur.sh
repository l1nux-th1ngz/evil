#!/bin/bash
# FILE: yes_build_aur.sh
# DESC: Download aur packages from file, build packages, enable in pacman.conf
# Set repo directory

base_dir=$PWD
repo_name="aur_repo_x86_64"
repo_dir="$base_dir/AUR_BUILDER/$repo_name"
iso_name="archiso"
iso_dir="$base_dir/$iso_name"

cat "$iso_dir/aur_git.links" | grep -v '^#' > ./AUR_BUILDER/git.links

cd ./AUR_BUILDER
./git_build_packages.sh $repo_name
packages="$repo_dir/*.pkg.tar.zst"
for package in $packages; do
    echo "Adding $package to repo"
    repo-add "$repo_dir/$repo_name.db.tar.gz" "$package"
done

cd $base_dir
repo_dir="$iso_dir/$repo_name"
rm -rf $repo_dir
mv ./AUR_BUILDER/$repo_name $repo_dir

# Add packages and pacman.conf
cd $base_dir

# Configure Pacman
cp "$iso_dir/pacman.conf.bak" "$iso_dir/pacman.conf"
echo -ne "\n\n[$repo_name]" >> "$iso_dir/pacman.conf"
echo -ne "\nSigLevel = Optional TrustAll" >> "$iso_dir/pacman.conf"
echo -ne "\nServer = file://"$repo_dir >> "$iso_dir/pacman.conf"