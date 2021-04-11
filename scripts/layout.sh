layout=$(setxkbmap -query | grep layout)
echo $layout | sed 's/://'