//#[ F:\cygwin\usr\include\_newlib_version.h
#define _NEWLIB_VERSION "2.4.0"
#define __NEWLIB__ 2
#define __NEWLIB_MINOR__ 4
#define __NEWLIB_PATCHLEVEL__ 0
//#]
//#[ F:\cygwin\usr\include\sys\features.h
#  define __GNUC_PREREQ(maj, min) 0
#define	__GNUC_PREREQ__(ma, mi)	__GNUC_PREREQ(ma, mi)
#define	_DEFAULT_SOURCE		1
#define	_POSIX_SOURCE		1
#define	_POSIX_C_SOURCE		200809L
#define	_ATFILE_SOURCE		1
#define	__ATFILE_VISIBLE	1
#define	__BSD_VISIBLE		1
#define	__GNU_VISIBLE		0
#define	__ISO_C_VISIBLE		1999
#define	__LARGEFILE_VISIBLE	0
#define	__MISC_VISIBLE		1
#define	__POSIX_VISIBLE		200809
#define	__SVID_VISIBLE		1
#define	__XSI_VISIBLE		0
//#]
//#[ F:\cygwin\usr\include\machine\_default_types.h
#define __EXP(x) x
//#]
//#[ F:\cygwin\usr\include\sys\cdefs.h
#define __PMT(args)	args
#define __DOTS    	, ...
#define __THROW
#define __ptr_t void *
#define __long_double_t  long double
#define __attribute_malloc__
#define __attribute_pure__
#define __attribute_format_strfmon__(a,b)
#define __flexarr      [0]
# define __bounded      /* nothing */
# define __unbounded    /* nothing */
# define __ptrvalue     /* nothing */
#define	__has_attribute(x)	0
#define	__has_extension		__has_feature
#define	__has_feature(x)	0
#define	__has_include(x)	0
#define	__has_builtin(x)	0
#define	__BEGIN_DECLS
#define	__END_DECLS
#define	__P(protos)	()		/* traditional C preprocessor */
#define	__CONCAT(x,y)	x/**/y
#define	__STRING(x)	"x"
#define	__const				/* delete pseudo-ANSI C keywords */
#define	__inline
#define	__signed
#define	__volatile
#define	const				/* delete ANSI C keywords */
#define	inline
#define	signed
#define	volatile
#define	__weak_symbol	__attribute__((__weak__))
#define	__dead2
#define	__pure2
#define	__unused
#define	__alloc_size(x)
#define	__alloc_align(x)
#define	__alignof(x)	__offsetof(struct { char __a; x __b; }, __b)
#define	_Alignas(x)		__aligned(x)
#define	_Alignof(x)		__alignof(x)
#define	_Atomic(T)		struct { T volatile __val; }
#define	_Noreturn		__dead2
#define	_Static_assert(x, y)	struct __hack
#define	_Thread_local		__thread
#define	__malloc_like
#define	__pure
#define	__always_inline
#define	__noinline
#define	__nonnull(x)
#define	__nonnull_all
#define	__fastcall
#define	__result_use_check
#define	__returns_twice
#define	__unreachable()	((void)0)
#define	__func__	NULL
#define	__restrict
#define	__predict_true(exp)     (exp)
#define	__predict_false(exp)    (exp)
#define	__sentinel
#define	__exported
#define	__hidden
#define __offsetof(type, field)	offsetof(type, field)
#define	__rangeof(type, start, end) \
	(__offsetof(type, end) - __offsetof(type, start))
#define	__containerof(x, s, m)						\
	__DEQUALIFY(s *, (const volatile char *)(x) - __offsetof(s, m))
#define	__printflike(fmtarg, firstvararg)
#define	__scanflike(fmtarg, firstvararg)
#define	__format_arg(fmtarg)
#define	__strfmonlike(fmtarg, firstvararg)
#define	__strftimelike(fmtarg, firstvararg)
#define	__gnu_inline
#define	__printf0like(fmtarg, firstvararg)
#define	__FBSDID(s)	struct __hack
#define	__RCSID(s)	struct __hack
#define	__RCSID_SOURCE(s)	struct __hack
#define	__SCCSID(s)	struct __hack
#define	__COPYRIGHT(s)	struct __hack
#define	__DECONST(type, var)	((type)(__uintptr_t)(const void *)(var))
#define	__DEVOLATILE(type, var)	((type)(__uintptr_t)(volatile void *)(var))
#define	__DEQUALIFY(type, var)	((type)(__uintptr_t)(const volatile void *)(var))
#define	__arg_type_tag(arg_kind, arg_idx, type_tag_idx)
#define	__datatype_type_tag(kind, type)
#define	__lock_annotate(x)
#define	__lockable		__lock_annotate(lockable)
#define	__locks_exclusive(...) \
	__lock_annotate(exclusive_lock_function(__VA_ARGS__))
#define	__locks_shared(...) \
	__lock_annotate(shared_lock_function(__VA_ARGS__))
#define	__trylocks_exclusive(...) \
	__lock_annotate(exclusive_trylock_function(__VA_ARGS__))
#define	__trylocks_shared(...) \
	__lock_annotate(shared_trylock_function(__VA_ARGS__))
#define	__unlocks(...)		__lock_annotate(unlock_function(__VA_ARGS__))
#define	__asserts_exclusive(...) \
	__lock_annotate(assert_exclusive_lock(__VA_ARGS__))
#define	__asserts_shared(...) \
	__lock_annotate(assert_shared_lock(__VA_ARGS__))
#define	__requires_exclusive(...) \
	__lock_annotate(exclusive_locks_required(__VA_ARGS__))
#define	__requires_shared(...) \
	__lock_annotate(shared_locks_required(__VA_ARGS__))
#define	__requires_unlocked(...) \
	__lock_annotate(locks_excluded(__VA_ARGS__))
#define	__no_lock_analysis	__lock_annotate(no_thread_safety_analysis)
#define	__guarded_by(x)		__lock_annotate(guarded_by(x))
#define	__pt_guarded_by(x)	__lock_annotate(pt_guarded_by(x))
//#]
//#[ F:\cygwin\usr\include\bits\wordsize.h
# define __WORDSIZE     32
//#]
//#[ F:\cygwin\usr\include\limits.h
#define _MACH_MACHLIMITS_H_
#define CHAR_BIT __CHAR_BIT__
#define LONG_BIT (__SIZEOF_LONG__ * __CHAR_BIT__)
#define WORD_BIT (__SIZEOF_INT__ * __CHAR_BIT__)
#define MB_LEN_MAX 8
#define SCHAR_MIN (-128)
#define SCHAR_MAX 127
#define UCHAR_MAX 255
#define CHAR_MIN (-128)
#define CHAR_MAX 127
#define SHRT_MIN (-32768)
#define SHRT_MAX 32767
#define USHRT_MAX 65535
#define __INT_MAX__ 2147483647
#define INT_MIN (-INT_MAX-1)
#define INT_MAX __INT_MAX__
#define UINT_MAX (INT_MAX * 2U + 1)
#define __LONG_MAX__ 2147483647L
#define LONG_MIN (-LONG_MAX-1L)
#define LONG_MAX __LONG_MAX__
#define ULONG_MAX (LONG_MAX * 2UL + 1)
#define __LONG_LONG_MAX__ 9223372036854775807LL
#define LLONG_MIN (-LLONG_MAX-1)
#define LLONG_MAX __LONG_LONG_MAX__
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1)
#define SSIZE_MAX (__INT_MAX__)
#define ARG_MAX 32000
#define ATEXIT_MAX 32
#define CHILD_MAX 256
#define HOST_NAME_MAX 255
#define IOV_MAX 1024
#define LOGIN_NAME_MAX 256	/* equal to UNLEN defined in w32api/lmcons.h */
#define MQ_OPEN_MAX OPEN_MAX
#define MQ_PRIO_MAX INT_MAX
#define OPEN_MAX 256
#define PAGESIZE 65536
#define PAGE_SIZE PAGESIZE
#define PTHREAD_DESTRUCTOR_ITERATIONS 1
#define PTHREAD_KEYS_MAX 1024
#define PTHREAD_STACK_MIN 65536
#define RTSIG_MAX 1
#define SEM_VALUE_MAX 1147483648
#define SIGQUEUE_MAX 32
#define STREAM_MAX 20
#define SYMLOOP_MAX 10
#define TIMER_MAX 32
#define TTY_NAME_MAX 32
#define FILESIZEBITS 64
#define LINK_MAX 1024
#define MAX_CANON 255
#define MAX_INPUT 255
#define NAME_MAX 255
#define PATH_MAX 4096
#define PIPE_BUF 4096
#define SYMLINK_MAX (PATH_MAX - 1)
#define BC_BASE_MAX 99
#define BC_DIM_MAX 2048
#define BC_SCALE_MAX 99
#define BC_STRING_MAX 1000
#define EXPR_NEST_MAX 32
#define LINE_MAX 2048
#define NGROUPS_MAX 1024
#define RE_DUP_MAX 255
#define _POSIX_CLOCKRES_MIN                 20000000
#define _POSIX_AIO_LISTIO_MAX                      2
#define _POSIX_AIO_MAX                             1
#define	_POSIX_ARG_MAX		                4096
#define _POSIX_CHILD_MAX	                  25
#define _POSIX_DELAYTIMER_MAX                     32
#define _POSIX_HOST_NAME_MAX	                 255
#define _POSIX_LINK_MAX		                   8
#define _POSIX_LOGIN_NAME_MAX	                   9
#define _POSIX_MAX_CANON	                 255
#define _POSIX_MAX_INPUT	                 255
#define _POSIX_MQ_OPEN_MAX                         8
#define _POSIX_MQ_PRIO_MAX                        32
#define _POSIX_NAME_MAX		                  14
#define _POSIX_NGROUPS_MAX	                   8
#define _POSIX_OPEN_MAX		                  20
#define _POSIX_PATH_MAX		                 256
#define _POSIX_PIPE_BUF		                 512
#define _POSIX_RE_DUP_MAX	                 255
#define _POSIX_RTSIG_MAX	                   8
#define _POSIX_SEM_NSEMS_MAX                     256
#define _POSIX_SEM_VALUE_MAX                   32767
#define _POSIX_SIGQUEUE_MAX                       32
#define _POSIX_SSIZE_MAX	               32767
#define _POSIX_STREAM_MAX	                   8
#define _POSIX_SS_REPL_MAX                         4
#define _POSIX_SYMLINK_MAX	                 255
#define _POSIX_SYMLOOP_MAX	                   8
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS        4
#define _POSIX_THREAD_KEYS_MAX                   128
#define _POSIX_THREAD_THREADS_MAX                 64
#define _POSIX_TIMER_MAX	                  32
#define _POSIX_TRACE_EVENT_NAME_MAX               30
#define _POSIX_TRACE_NAME_MAX                      8
#define _POSIX_TRACE_SYS_MAX                       8
#define _POSIX_TRACE_USER_EVENT_MAX               32
#define _POSIX_TTY_NAME_MAX	                   9
#define _POSIX_TZNAME_MAX                          6
#define _POSIX2_BC_BASE_MAX	                  99
#define _POSIX2_BC_DIM_MAX	                2048
#define _POSIX2_BC_SCALE_MAX	                  99
#define _POSIX2_BC_STRING_MAX	                1000
#define _POSIX2_COLL_WEIGHTS_MAX                   2
#define _POSIX2_EXPR_NEST_MAX	                  32
#define _POSIX2_LINE_MAX	                2048
#define _POSIX2_RE_DUP_MAX	                 255
#define _XOPEN_IOV_MAX                            16
#define _XOPEN_NAME_MAX                          255
#define _XOPEN_PATH_MAX                         1024
#define NL_ARGMAX                                  9
#define NL_LANGMAX                                14
#define NL_MSGMAX                              32767
#define NL_NMAX                              INT_MAX
#define NL_SETMAX                                255
#define NL_TEXTMAX                  _POSIX2_LINE_MAX
#define NZERO			                  20
//#]
//#[ F:\cygwin\usr\include\machine\_default_types.h
#define ___int64_t_defined 1
#define ___int_least8_t_defined 1
#define ___int_least16_t_defined 1
#define ___int_least32_t_defined 1
#define ___int_least64_t_defined 1
//#]
//#[ F:\cygwin\usr\include\sys\_intsup.h
#define __STDINT_EXP(x) x
#define __have_longlong64 1
#define __have_long64 1
#define signed +0
#define unsigned +0
#define char +0
#define short +1
#define __int20 +2
#define int +2
#define long +4
#define __INT8 "hh"
#define __FAST8 "hh"
#define __LEAST8 "hh"
//#]
//#[ F:\cygwin\usr\include\sys\_stdint.h
#define _INT64_T_DECLARED
#define _UINT64_T_DECLARED
#define __int64_t_defined 1
#define _INTPTR_T_DECLARED
#define _UINTPTR_T_DECLARED
//#]