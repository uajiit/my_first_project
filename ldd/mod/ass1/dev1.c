#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/version.h>
#include"dev.h"


struct dev_ops dev1={
.open=dev1_open,
.close=dev1_close,
};
struct dev_ops *fptr=&dev1;

void dev1_open( void)
{
printk(" dev1 module open \n");
}

void dev1_close( void )
{
printk(" dev1 module unloded \n");

}

static int dev1_init(void)
{
printk(" dev1 module init implemented \n");
fptr->open();
 dev2_init2();
return 0;
}


static void dev1_exit(void)
{

fptr->close();
dev2_exit2();
}
module_init(dev1_init);
module_exit(dev1_exit);
MODULE_AUTHOR("Ajit Upadhayay");
MODULE_LICENSE("GPLV2");
