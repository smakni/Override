for i in {22..26};
    do printf "%%%d\$lp\n" "$i" | ./level02 | grep does | awk '{print $1;}';
done