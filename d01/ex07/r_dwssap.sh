cat /etc/passwd | sed -e '/^;/d' | sed -n 'n;p' | rev | cut -d / -f 1 | sort -r | tr '\n' ','

