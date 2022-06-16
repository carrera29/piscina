ifconfig -a | awk '/ether / {print $NF}'
