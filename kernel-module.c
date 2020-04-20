/******************************************************************************
 *
 *   Copyright (C) 2020 Stef Boerrigter, Alten Nederland
 */

#include <linux/module.h>

int init_module(void)
{
	printk("Hello Playground World!\n");
	return 0;
}

void cleanup_module(void)
{
	printk("Cleanup Playground Module\n");
}

MODULE_LICENSE("GPL");
