obj-m += hello.o

# Build for running kernel on build machine
# KVER = $(shell uname -r)

# Build for specific kernel different from the running kernel
# apt install linux-headers-4.19.0-20-cloud-amd64
# ls /usr/src/
KVER = 4.19.0-20-cloud-amd64

KDIR = /lib/modules/$(KVER)/build

# If only one set of kernel source installed on build machine
# Use this to avoid specifying KVER
# KDIR = /lib/modules/*/build

default:
	make -C $(KDIR) M=$(PWD) modules

install:
	make -C $(KDIR) M=$(PWD) modules_install

clean:
	make -C $(KDIR) M=$(PWD) clean
