# GRUBKit

Hi there!

This is just a demonstration of a very simple trick to deploy your own bootkit and system that boots with GRUB. 

The trick is simply to use your own code as the init parameter to the kernel, fork, start systemd as normal and you're done!

PSTree did not detect my bootkit when I did this. Seems like a good and simple method.

To deploy the demo, simply run deploy.sh(as root). The regex I wrote for sed will add an init parameter to a normal debian/ubuntu GRUB config.
If the system is using an encrypted filesystem, the regex doesn't work anymore(but the method still does!)

Please enjoy yourself
