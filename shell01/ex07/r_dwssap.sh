cat /etc/passwd | grep -v "#" | sed -n 'n;p' | rev | sort -dr | cut -d':' -f7 | sed -n "$FT_LINE1,$FT_LINE2 p" | xargs echo -n | sed 's/ /, /g' | sed 's/$/./'
