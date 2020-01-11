#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// This is base code for working with Ubuntu 19.04/systemd
// There is obviously not much logic in here for now. 
// This code will work when used as an init parameter in GRUB.

/** Example grub linux boot line: linux	/boot/vmlinuz-5.0.0-17-generic root=UUID=d603b4ad-0dd1-489a-b464-d3f8d21b9d64 init=/bootkit ro  quiet splash $vt_handoff
 *
 * Where /bootkit is the location of your starting logic. 
**/
int main(){
	printf("Bootkit installed! \n");

	if(getpid() == 1){
		if (fork())
			execl("/usr/lib/systemd/systemd", "/usr/lib/systemd/systemd", NULL);
	}
	return 0;
}
