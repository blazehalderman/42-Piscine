ldapsearch -o ldif-wrap=no -L "uid=z*" cn | grep "^cn:" | sort -rd
