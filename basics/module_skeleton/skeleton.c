#include <linux/module.h>
#include <linux/init.h>

#define DRV_NAME "skeleton"

static int __init skeleton_init(void)
{
        printk(KERN_DEBUG DRV_NAME ": %s()\n", __FUNCTION__);

        return 0;
}

static void __exit skeleton_exit(void)
{
        printk(KERN_DEBUG DRV_NAME ": %s()\n", __FUNCTION__);
}

module_init(skeleton_init);
module_exit(skeleton_exit);

MODULE_AUTHOR("Oleksandr Kravchuk");
MODULE_LICENSE("WTFPL");
MODULE_DESCRIPTION("Linux kernel module skeleton");
