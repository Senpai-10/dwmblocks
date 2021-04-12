cpu_usage=$(top -b -n1 | grep "Cpu(s)" | awk '{print $2 + $4}')
cpu_usage=$(echo $cpu_usage | perl -nl -MPOSIX -e 'print floor($_)')
echo "[CPU  $cpu_usage%]"
