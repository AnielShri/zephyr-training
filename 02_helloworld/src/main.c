/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>

// for some reason syntax highligthing does not work :/

void main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);
}
