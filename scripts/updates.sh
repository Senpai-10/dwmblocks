sudo pacman -Syup > /dev/null 2>&1
updates=$(pacman -Qu | wc -l)

echo "Updates [$updates]"

