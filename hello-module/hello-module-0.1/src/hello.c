#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO, pr_info
#include <linux/init.h>      // included for __init, __exit, __initdata macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("covid terminator");
MODULE_DESCRIPTION("Hello World from covid terminator");

static char* hello_from __initdata = "covid terminator";

// module_param(param_name, param_type, param_permissions)
module_param(hello_from, charp, 0000); 
MODULE_PARM_DESC(hello_from, "Who is saying hello"); 

static int __init hello_init(void)
{
    // printk(KERN_INFO "Hello world from %s!\n", hello_from);
    pr_info("Hello world from %s!\n", hello_from);
    return 0;    // Non-zero return means that the module couldn't be loaded.
}

static void __exit hello_exit(void)
{
    // printk(KERN_INFO "Goodbye covid\n");
    pr_info("Goodbye covid\n");
}

module_init(hello_init);
module_exit(hello_exit);
