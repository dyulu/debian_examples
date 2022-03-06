#
# Regular cron jobs for the hello-dhmake package
#
0 4	* * *	root	[ -x /usr/bin/hello-dhmake_maintenance ] && /usr/bin/hello-dhmake_maintenance
