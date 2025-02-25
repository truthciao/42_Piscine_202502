cat /etc/passwd | awk '{split($0,a,":"); print a[1]}'| awk 'NR%2==0'| rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | paste -sd "," | sed 's/,/, /g' | awk '{print $0"."}' | tr -d "\n"

