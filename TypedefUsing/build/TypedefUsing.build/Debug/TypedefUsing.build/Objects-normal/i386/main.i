# 1 "/Users/sohaengi/Desktop/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/TypedefUsing/main.c"
# 1 "/Users/sohaengi/Desktop/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/TypedefUsing//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/Users/sohaengi/Desktop/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/TypedefUsing/main.c"
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdio.h" 1 3 4
# 64 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdio.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/_types.h" 1 3 4
# 27 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/_types.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_types.h" 1 3 4
# 26 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/cdefs.h" 1 3 4
# 27 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_types.h" 2 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/_types.h" 1 3 4
# 28 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/_types.h" 1 3 4
# 31 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 64 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef int __darwin_ptrdiff_t;





typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 29 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/_types.h" 2 3 4
# 28 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_types.h" 2 3 4



struct mcontext;
struct mcontext64;
# 60 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[36]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[24]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[4]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[4]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[124]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[12]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[596]; };
# 96 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint32_t __darwin_ino_t;
typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;

typedef struct mcontext *__darwin_mcontext_t;
typedef struct mcontext64 *__darwin_mcontext64_t;



typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];



struct sigaltstack



{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};

typedef struct sigaltstack __darwin_stack_t;






struct ucontext



{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 __darwin_stack_t uc_stack;

 struct ucontext *uc_link;



 __darwin_size_t uc_mcsize;
 __darwin_mcontext_t uc_mcontext;
};

typedef struct ucontext __darwin_ucontext_t;





struct ucontext64 {
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 __darwin_stack_t uc_stack;
 struct ucontext64 *uc_link;
 __darwin_size_t uc_mcsize;
 __darwin_mcontext64_t uc_mcontext64;
};
typedef struct ucontext64 __darwin_ucontext64_t;
# 28 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/_types.h" 2 3 4

typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;



typedef unsigned long __darwin_wctype_t;
# 65 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdio.h" 2 3 4






typedef __darwin_va_list va_list;




typedef __darwin_size_t size_t;







typedef __darwin_off_t fpos_t;
# 98 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 132 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;







extern FILE __sF[];


# 248 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdio.h" 3 4

void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * , fpos_t *);
char *fgets(char * , int, FILE *);
FILE *fopen(const char * , const char * );
int fprintf(FILE * , const char * , ...) ;
int fputc(int, FILE *);
int fputs(const char * , FILE * );
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
     FILE * ) ;
int fscanf(FILE * , const char * , ...) ;
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) ;
int getc(FILE *);
int getchar(void);
char *gets(char *);

extern const int sys_nerr;
extern const char *const sys_errlist[];

void perror(const char *);
int printf(const char * , ...) ;
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) ;
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) ;
int sscanf(const char * , const char * , ...) ;
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) ;
int vprintf(const char * , va_list) ;
int vsprintf(char * , const char * , va_list) ;

int asprintf(char **, const char *, ...) ;
int vasprintf(char **, const char *, va_list) ;


# 308 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdio.h" 3 4

char *ctermid(char *);

char *ctermid_r(char *);

FILE *fdopen(int, const char *);

char *fgetln(FILE *, size_t *);

int fileno(FILE *);
void flockfile(FILE *);

const char
 *fmtcheck(const char *, const char *);
int fpurge(FILE *);

int fseeko(FILE *, fpos_t, int);
fpos_t ftello(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);

int getw(FILE *);

int pclose(FILE *);
FILE *popen(const char *, const char *);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);

int putw(int, FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);

int snprintf(char * , size_t, const char * , ...) ;
char *tempnam(const char *, const char *);
int vfscanf(FILE * , const char * , va_list) ;
int vscanf(const char * , va_list) ;
int vsnprintf(char * , size_t, const char * , va_list) ;
int vsscanf(const char * , const char * , va_list) ;

FILE *zopen(const char *, const char *, int);








FILE *funopen(const void *,
  int (*)(void *, char *, int),
  int (*)(void *, const char *, int),
  fpos_t (*)(void *, fpos_t, int),
  int (*)(void *));

# 372 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdio.h" 3 4

int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) ;
int __swbuf(int, FILE *);








static __inline int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 2 "/Users/sohaengi/Desktop/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/TypedefUsing/main.c" 2
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdlib.h" 1 3 4
# 64 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdlib.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/wait.h" 1 3 4
# 73 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






typedef __darwin_pid_t pid_t;




typedef __darwin_id_t id_t;
# 110 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 1 3 4
# 67 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 68 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 2 3 4





# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/signal.h" 1 3 4
# 29 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/signal.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/signal.h" 1 3 4
# 31 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 46 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/signal.h" 3 4
struct sigcontext {
    int sc_onstack;
    int sc_mask;
    unsigned int sc_eax;
    unsigned int sc_ebx;
    unsigned int sc_ecx;
    unsigned int sc_edx;
    unsigned int sc_edi;
    unsigned int sc_esi;
    unsigned int sc_ebp;
    unsigned int sc_esp;
    unsigned int sc_ss;
    unsigned int sc_eflags;
    unsigned int sc_eip;
    unsigned int sc_cs;
    unsigned int sc_ds;
    unsigned int sc_es;
    unsigned int sc_fs;
    unsigned int sc_gs;
};
# 30 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/signal.h" 2 3 4
# 74 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 2 3 4
# 139 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
typedef __darwin_mcontext_t mcontext_t;





typedef __darwin_mcontext64_t mcontext64_t;
# 156 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;
# 171 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
typedef __darwin_ucontext_t ucontext_t;





typedef __darwin_ucontext64_t ucontext64_t;





typedef __darwin_uid_t uid_t;


union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};



typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long pad[7];
} siginfo_t;
# 297 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 355 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 364 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
typedef __darwin_stack_t stack_t;
# 377 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 396 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 418 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/signal.h" 3 4

void (*signal(int, void (*)(int)))(int);

# 111 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/resource.h" 1 3 4
# 74 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/resource.h" 3 4
struct timeval {
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 90 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/resource.h" 3 4
typedef __int64_t rlim_t;
# 135 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 146 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 207 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};




int getpriority(int, id_t);
int getrlimit(int, struct rlimit *);
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);
int setrlimit(int, const struct rlimit *);

# 112 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/wait.h" 2 3 4
# 182 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/endian.h" 1 3 4
# 32 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/endian.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/endian.h" 1 3 4
# 92 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/endian.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_endian.h" 1 3 4
# 88 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h" 1 3 4
# 14 "/Developer/SDKs/MacOSX10.4u.sdk/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h" 3 4
typedef signed char int8_t;




typedef short int16_t;




typedef int int32_t;




typedef long long int64_t;




typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;






typedef long intptr_t;




typedef unsigned long uintptr_t;







typedef long long int intmax_t;
# 100 "/Developer/SDKs/MacOSX10.4u.sdk/usr/lib/gcc/i686-apple-darwin8/4.0.1/include/stdint.h" 3 4
typedef long long unsigned int uintmax_t;
# 89 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_endian.h" 2 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/libkern/OSByteOrder.h" 1 3 4
# 54 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/libkern/OSByteOrder.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/libkern/i386/OSByteOrder.h" 1 3 4
# 40 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/libkern/i386/OSByteOrder.h" 3 4
static __inline__
uint16_t
_OSSwapInt16(
    uint16_t data
)
{
    return ((data << 8) | (data >> 8));
}

static __inline__
uint32_t
_OSSwapInt32(
    uint32_t data
)
{
    __asm__ ("bswap   %0" : "+r" (data));
    return data;
}


static __inline__
uint64_t
_OSSwapInt64(
    uint64_t data
)
{
    __asm__ ("bswap   %%eax\n\t"
             "bswap   %%edx\n\t"
             "xchgl   %%eax, %%edx"
             : "+A" (data));
    return data;
}
# 88 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/libkern/i386/OSByteOrder.h" 3 4
static __inline__
uint16_t
OSReadSwapInt16(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    uint16_t result;

    result = *(volatile uint16_t *)((uintptr_t)base + byteOffset);
    return _OSSwapInt16(result);
}

static __inline__
uint32_t
OSReadSwapInt32(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    uint32_t result;

    result = *(volatile uint32_t *)((uintptr_t)base + byteOffset);
    return _OSSwapInt32(result);
}

static __inline__
uint64_t
OSReadSwapInt64(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    uint64_t result;

    result = *(volatile uint64_t *)((uintptr_t)base + byteOffset);
    return _OSSwapInt64(result);
}



static __inline__
void
OSWriteSwapInt16(
    volatile void * base,
    uintptr_t byteOffset,
    uint16_t data
)
{
    *(volatile uint16_t *)((uintptr_t)base + byteOffset) = _OSSwapInt16(data);
}

static __inline__
void
OSWriteSwapInt32(
    volatile void * base,
    uintptr_t byteOffset,
    uint32_t data
)
{
    *(volatile uint32_t *)((uintptr_t)base + byteOffset) = _OSSwapInt32(data);
}

static __inline__
void
OSWriteSwapInt64(
    volatile void * base,
    uintptr_t byteOffset,
    uint64_t data
)
{
    *(volatile uint64_t *)((uintptr_t)base + byteOffset) = _OSSwapInt64(data);
}
# 55 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/libkern/OSByteOrder.h" 2 3 4
# 80 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/libkern/OSByteOrder.h" 3 4
enum {
    OSUnknownByteOrder,
    OSLittleEndian,
    OSBigEndian
};

static __inline__
int32_t
OSHostByteOrder(void) {

    return OSLittleEndian;





}
# 109 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/libkern/OSByteOrder.h" 3 4
static __inline__
uint16_t
_OSReadInt16(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    return *(volatile uint16_t *)((uintptr_t)base + byteOffset);
}

static __inline__
uint32_t
_OSReadInt32(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    return *(volatile uint32_t *)((uintptr_t)base + byteOffset);
}

static __inline__
uint64_t
_OSReadInt64(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    return *(volatile uint64_t *)((uintptr_t)base + byteOffset);
}



static __inline__
void
_OSWriteInt16(
    volatile void * base,
    uintptr_t byteOffset,
    uint16_t data
)
{
    *(volatile uint16_t *)((uintptr_t)base + byteOffset) = data;
}

static __inline__
void
_OSWriteInt32(
    volatile void * base,
    uintptr_t byteOffset,
    uint32_t data
)
{
    *(volatile uint32_t *)((uintptr_t)base + byteOffset) = data;
}

static __inline__
void
_OSWriteInt64(
    volatile void * base,
    uintptr_t byteOffset,
    uint64_t data
)
{
    *(volatile uint64_t *)((uintptr_t)base + byteOffset) = data;
}
# 90 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/_endian.h" 2 3 4


uint16_t ntohs(uint16_t);
uint16_t htons(uint16_t);
uint32_t ntohl(uint32_t);
uint32_t htonl(uint32_t);

# 93 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/endian.h" 2 3 4
# 33 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/endian.h" 2 3 4
# 183 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 240 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/sys/wait.h" 3 4

pid_t wait(int *);
pid_t waitpid(pid_t, int *, int);

int waitid(idtype_t, id_t, siginfo_t *, int);


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);


# 65 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/alloca.h" 1 3 4
# 35 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/alloca.h" 3 4

void *alloca(size_t);

# 67 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdlib.h" 2 3 4
# 80 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdlib.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;






typedef __darwin_wchar_t wchar_t;



typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 133 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 143 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdlib.h" 3 4

void abort(void) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * , const char * , size_t);
int mbtowc(wchar_t * , const char * , size_t);
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **);
float strtof(const char *, char **);
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **) ;

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *);
size_t wcstombs(char * , const wchar_t * , size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *, int *);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);



char *initstate(unsigned long, char *, long);

long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) ;
long random(void);
char *realpath(const char *, char *resolved_path);
unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) ;



int setkey(const char *);

char *setstate(const char *);
void srand48(long);



void srandom(unsigned long);

int unlockpt(int);



void unsetenv(const char *);




# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/types.h" 1 3 4
# 32 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/types.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/types.h" 1 3 4
# 74 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;




typedef unsigned short u_int16_t;




typedef unsigned int u_int32_t;




typedef unsigned long long u_int64_t;




typedef int32_t register_t;
# 109 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;




typedef u_int64_t syscall_arg_t;
# 33 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/types.h" 2 3 4
# 249 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/stdlib.h" 2 3 4


typedef __darwin_dev_t dev_t;




typedef __darwin_mode_t mode_t;



u_int32_t
  arc4random(void);
void arc4random_addrandom(unsigned char *dat, int datlen);
void arc4random_stir(void);


char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int);
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));
void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
int rand_r(unsigned *);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);


# 3 "/Users/sohaengi/Desktop/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/TypedefUsing/main.c" 2
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/time.h" 1 3 4
# 74 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/time.h" 3 4
typedef __darwin_clock_t clock_t;
# 84 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/time.h" 3 4
typedef __darwin_time_t time_t;




struct timespec {
        time_t tv_sec;
        long tv_nsec;
};


struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};

# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/_limits.h" 1 3 4
# 28 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/_limits.h" 3 4
# 1 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/i386/_limits.h" 1 3 4
# 29 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/machine/_limits.h" 2 3 4
# 110 "/Developer/SDKs/MacOSX10.4u.sdk/usr/include/time.h" 2 3 4






extern char *tzname[];


extern int getdate_err;



extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void);
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *);
size_t strftime(char * , size_t, const char * , const struct tm * ) ;
char *strptime(const char * , const char * , struct tm * );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm *, char *);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t *, struct tm *);
struct tm *localtime_r(const time_t *, struct tm *);
time_t posix2time(time_t);

char *timezone(int, int);

void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) ;


# 4 "/Users/sohaengi/Desktop/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/TypedefUsing/main.c" 2



typedef int (* FPtr)();


int add(int a, int b){ return a+b; }
int sub(int a, int b){ return a-b; }
int mul(int a, int b){ return a*b; }

FPtr pa[3] = {add, sub, mul};

FPtr compute(FPtr op)
{
 int rnd = op();
 printf("%3d ; ",rnd%3);
 return pa[rnd % 3];
}

int main (int argc, const char * argv[]) {
 int i;
 time_t t;

 srand((unsigned)time(&t));

 for(i=0;i<3;i++) printf("%x\n",pa[i]);

 for(i=0; i<10; i++)
 {
  printf("    %d\n", compute(rand)(3,4));
 }
    return 0;
}
