usage=$(top -b -n1 | grep "Cpu(s)" | awk '{print $2 + $4}')
echo $usage | perl -nl -MPOSIX -e 'print floor($_)'
