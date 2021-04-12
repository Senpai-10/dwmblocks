ram_usage=$(free -m | awk 'NR==2{printf "%.2f", $3*100/$2 }' | perl -nl -MPOSIX -e 'print floor($_)')
# ram_usage=$($ram_usage | perl -nl -MPOSIX -e 'print floor($_)')

echo "[RAM  $ram_usage%]"
