#ifndef _LINUX_DEFS_H_
#define	_LINUX_DEFS_H_

/*
 * Stripped down version of the Linux defines
 */

#define	__user
#define	__kernel
#define	__safe
#define	__force
#define	__nocast
#define	__iomem
#define	__must_check
#define	__chk_user_ptr(x) do {} while (0)
#define	__chk_io_ptr(x) do {} while (0)
#define	__builtin_warning(x, ...) (1)
#define	__acquires(x)
#define	__releases(x)
#define	__acquire(x) do {} while (0)
#define	__release(x) do {} while (0)
#define	__cond_lock(x,c) (c)
#define	__pgprot(x)     ((pgprot_t){(x)})
#define	SetPageReserved(...)   do {} while (0)
#define	ClearPageReserved(...) do {} while (0)
#define	spin_lock_init(lock) do {} while (0)
#define	_PAGE_PRESENT   0
#define	_PAGE_RW        0
#define	_PAGE_USER      0
#define	_PAGE_ACCESSED  0
#define	PAGE_SHARED 0
#define	PAGE_ALIGN(addr)        (((addr)+PAGE_SIZE-1)&(~(PAGE_SIZE - 1)))
#define	PAGE_OFFSET	0
#define	__pa(x)                 ((unsigned long)(x)-PAGE_OFFSET)
#define	S_IRUGO		0
#define	offsetof(t, m) ((uint8_t *)&((t *)0)->m - (uint8_t *)0)
#define	container_of(ptr, t, m) ((t *)((uint8_t *)(ptr) - offsetof(t, m)))
#define	__devinitdata
#define	__init
#define	__exit
#define	__stringify(x)	#x
#define	ERESTARTSYS     512
#define	ENOIOCTLCMD     513
#define	EMEDIUMTYPE	514
#define	ENODATA		515
#define	EXPORT_SYMBOL(...)
#define	EXPORT_SYMBOL_GPL(...)
#define	MODULE_AUTHOR(...)
#define	MODULE_DESCRIPTION(...)
#define	MODULE_LICENSE(...)
#define	MODULE_DEVICE_TABLE(...)
#define	MODULE_PARM_DESC(...)
#define	MODULE_VERSION(...)
#define	THIS_MODULE (NULL)
#define	module_param(...)
#define	info(...) do {} while (0)
#define	printk(...) do {} while (0)
#define	warn printk
#define	dbg printk
#define	err printk
#define	kmalloc(s,opt) malloc(s)
#define	kzalloc(s,opt) calloc(1, s)
#define	vmalloc_user(pg) malloc((pg) * PAGE_SIZE)
#define	vfree(ptr) free(ptr)
#define	kfree(ptr) free(ptr)
#define	udelay(d) usleep(d)
#define	msleep(d) usleep((d) * 1000)
#define	mdelay(d) usleep((d) * 1000)
#define	__GFP_WAIT 0
#define	__GFP_HIGH 0
#define	__GFP_IO 0
#define	__GFP_FS 0
#define	__GFP_COLD 0
#define	__GFP_NOWARN 0
#define	__GFP_REPEAT 0
#define	__GFP_NOFAIL 0
#define	__GFP_NORETRY 0
#define	__GFP_NO_GROW 0
#define	__GFP_COMP 0
#define	__GFP_ZERO 0
#define	__GFP_NOMEMALLOC 0
#define	__GFP_HARDWALL 0
#define	GFP_NOWAIT 0
#define	GFP_ATOMIC 0
#define	GFP_NOIO 0
#define	GFP_NOFS 0
#define	GFP_KERNEL 0
#define	GFP_USER 0
#define	GFP_HIGHUSER 0
#define	TASK_RUNNING            0
#define	TASK_INTERRUPTIBLE      1
#define	TASK_UNINTERRUPTIBLE    2
#define	TASK_STOPPED            4
#define	TASK_TRACED             8
#define	EXIT_ZOMBIE             16
#define	EXIT_DEAD               32
#define	TASK_NONINTERACTIVE     64
#define	no_llseek	NULL
#define	BITS_PER_LONG 32
#define	KERNEL_VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))
#define	LINUX_VERSION_CODE KERNEL_VERSION(2, 6, 29)
#define	BUS_ID_SIZE 32
#define	DECLARE_BITMAP(n, max) uint8_t n[((max)+7)/8]
#define	MKDEV(maj,min) (min)
#define	iminor(x) (x)
#define	dev_set_name(d, ...) snprintf((d)->name, sizeof((d)->name), __VA_ARGS__)
#define	module_init(...)
#define	module_exit(...)
#define	DEFAULT_POLLMASK POLLNVAL
#define	_IOC_SIZE(cmd) IOCPARM_LEN(cmd)
#define	_IOC_NR(cmd) ((cmd) & 0xFF)
#define	_IOC_DIR(cmd) ((cmd) & IOC_DIRMASK)
#define	_IOC_NONE IOC_VOID
#define	_IOC_READ IOC_OUT
#define	_IOC_WRITE IOC_IN
#define	__OLD_VIDIOC_
#define	PAGE_SIZE 4096
#define	PAGE_SHIFT 12
#define	down_read(...) do { } while (0)
#define	up_read(...) do { } while (0)
#define	VM_WRITE 0x0001
#define	VM_READ 0x0002
#define	VM_SHARED 0x0004
#define	VM_DONTEXPAND 0x0008
#define	VM_FAULT_OOM 0x0010
#define	VM_RESERVED 0x0020
#define	VM_IO 0x0040
#define	DMA_FROM_DEVICE 0x01
#define	DMA_TO_DEVICE 0x02
#define	module_param_named(...)
#define	ARRAY_SIZE(ptr) (sizeof(ptr) / sizeof((ptr)[0]))
#define	BIT(n) (1UL << (n))
#define	__KERNEL__
#define	capable(...) 1
#define	uninitialized_var(...) __VA_ARGS__
#define	false 0
#define	true 1
#define	HZ 1000
#define	jiffies get_jiffies_64()
#define	unlikely(...) __VA_ARGS__
#define	DIV_ROUND_UP(n,d) (((n) + (d) - 1) / (d))
#define	min(a,b) (((a) < (b)) ? (a) : (b))
#define	max(a,b) (((a) > (b)) ? (a) : (b))
#define	prefetch(x) (void)x
#define	BUG(...) do {} while (0)
#define	BUG_ON(...) do {} while (0)
#define	WARN_ON(...) do {} while (0)

typedef unsigned short umode_t;
typedef signed char __s8;
typedef unsigned char __u8;
typedef signed short __s16;
typedef unsigned short __u16;
typedef signed int __s32;
typedef unsigned int __u32;
typedef signed long long __s64;
typedef unsigned long long __u64;
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef u64 dma_addr_t;
typedef u64 dma64_addr_t;
typedef u64 sector_t;
typedef unsigned short __le16;
typedef unsigned int __le32;
typedef unsigned long kernel_ulong_t;
typedef unsigned int uint;
typedef long long loff_t;
typedef unsigned int gfp_t;
typedef uint32_t dev_t;
typedef uint8_t bool;

#endif					/* _LINUX_DEFS_H_ */
