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
	{ 0xf704969, "module_layout" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb7f634e0, "usb_deregister" },
	{ 0xec5361a1, "tty_driver_kref_put" },
	{ 0x808a9c9a, "tty_unregister_driver" },
	{ 0x8f63b77a, "usb_register_driver" },
	{ 0xbdbf9c40, "tty_register_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x27009497, "__tty_alloc_driver" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x6a5dc25f, "tty_port_tty_hangup" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xab91152a, "tty_port_close" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xfb578fc5, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xed77a7c6, "usb_register_dev" },
	{ 0x3e5d2ae5, "tty_port_register_device" },
	{ 0xcadb0b6b, "usb_get_intf" },
	{ 0xf974a2b6, "usb_driver_claim_interface" },
	{ 0xeae67c10, "tty_port_init" },
	{ 0x220925f6, "usb_alloc_urb" },
	{ 0x5486d56, "usb_alloc_coherent" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc94ea16, "usb_ifnum_to_if" },
	{ 0x4c55f5ef, "pv_ops" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb6862311, "usb_control_msg" },
	{ 0x67468117, "usb_autopm_get_interface" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc1d66c74, "tty_standard_install" },
	{ 0x20978fb9, "idr_find" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x800473f, "__cond_resched" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x8273d1ef, "tty_port_open" },
	{ 0x928b0001, "usb_anchor_urb" },
	{ 0x14e5bba3, "usb_autopm_get_interface_async" },
	{ 0xb5ede053, "tty_port_hangup" },
	{ 0xb501d91b, "usb_put_intf" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x96ae68ff, "tty_port_tty_wakeup" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb17da84a, "tty_flip_buffer_push" },
	{ 0x4805502, "tty_insert_flip_string_fixed_flag" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0xa9617a3a, "usb_find_interface" },
	{ 0x55dde90f, "_dev_info" },
	{ 0xd4aac7c8, "usb_driver_release_interface" },
	{ 0x6b6e9230, "usb_free_urb" },
	{ 0x7ebd7f90, "tty_unregister_device" },
	{ 0xeca9eee9, "tty_kref_put" },
	{ 0x3cb849ab, "tty_vhangup" },
	{ 0xf6f24b53, "tty_port_tty_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33659ce1, "usb_deregister_dev" },
	{ 0xa184af80, "tty_port_put" },
	{ 0x53a7536d, "usb_free_coherent" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xae9b3820, "usb_kill_urb" },
	{ 0x8dd6acda, "usb_get_from_anchor" },
	{ 0xb920480, "usb_autopm_put_interface" },
	{ 0xc2581664, "usb_autopm_get_interface_no_resume" },
	{ 0x857bbe30, "usb_autopm_put_interface_async" },
	{ 0x37af9a98, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c797b6, "kmem_cache_alloc_trace" },
	{ 0xd731cdd9, "kmalloc_caches" },
	{ 0x461dee21, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfeebe072, "usb_bulk_msg" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1A86pE018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p55D9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7F9D9CC3AA30194B482AD31");
