cat phonebook | grep -i "bauer" | grep -i "nicolas" | grep -v "nicolasbauer" | grep -v "bauernicolas" | awk '{print $3}' | awk '{print $1 $2 $3}' | grep '[0-9][0-9][0-9]-[0-9][0-9][0-9][0-9]'
