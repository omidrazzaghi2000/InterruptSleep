#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc94a8ec9, "module_layout" },
	{ 0x6c5073bb, "cdev_del" },
	{ 0x95d115f3, "device_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa6248059, "class_destroy" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x23081b47, "device_create" },
	{ 0x4b215207, "__class_create" },
	{ 0x1bc4d3da, "cdev_add" },
	{ 0xefdbd05e, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x303afa48, "send_sig_info" },
	{ 0x92997ed8, "_printk" },
	{ 0x9e5e0706, "current_task" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F193EE74F821095D55A10DA");
