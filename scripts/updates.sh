#sudo pacman -Syup > /dev/null 2>&1
updates=$(checkupdates | wc -l)
packages=$(pacman -Q | wc -l)

echo "Updates [$updates/$packages]"

