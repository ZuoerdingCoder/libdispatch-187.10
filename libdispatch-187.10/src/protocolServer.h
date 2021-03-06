#ifndef	_libdispatch_internal_protocol_server_
#define	_libdispatch_internal_protocol_server_

/* Module libdispatch_internal_protocol */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
	
/* BEGIN VOUCHER CODE */

#ifndef KERNEL
#if defined(__has_include)
#if __has_include(<mach/mig_voucher_support.h>)
#ifndef USING_VOUCHERS
#define USING_VOUCHERS
#endif
#ifndef __VOUCHER_FORWARD_TYPE_DECLS__
#define __VOUCHER_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern boolean_t voucher_mach_msg_set(mach_msg_header_t *msg) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif // __VOUCHER_FORWARD_TYPE_DECLS__
#endif // __has_include(<mach/mach_voucher_types.h>)
#endif // __has_include
#endif // !KERNEL
	
/* END VOUCHER CODE */

	
/* BEGIN MIG_STRNCPY_ZEROFILL CODE */

#if defined(__has_include)
#if __has_include(<mach/mig_strncpy_zerofill_support.h>)
#ifndef USING_MIG_STRNCPY_ZEROFILL
#define USING_MIG_STRNCPY_ZEROFILL
#endif
#ifndef __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern int mig_strncpy_zerofill(char *dest, const char *src, int len) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif /* __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ */
#endif /* __has_include(<mach/mig_strncpy_zerofill_support.h>) */
#endif /* __has_include */
	
/* END MIG_STRNCPY_ZEROFILL CODE */


#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	libdispatch_internal_protocol_MSG_COUNT
#define	libdispatch_internal_protocol_MSG_COUNT	16
#endif	/* libdispatch_internal_protocol_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>

#ifdef __BeforeMigServerHeader
__BeforeMigServerHeader
#endif /* __BeforeMigServerHeader */


/* SimpleRoutine mach_notify_port_deleted */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dispatch_mach_notify_port_deleted
(
	mach_port_t _notify,
	mach_port_name_t _name
);

/* SimpleRoutine mach_notify_send_possible */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dispatch_mach_notify_send_possible
(
	mach_port_t _notify,
	mach_port_name_t _name
);

/* SimpleRoutine mach_notify_port_destroyed */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dispatch_mach_notify_port_destroyed
(
	mach_port_t _notify,
	mach_port_t _rights
);

/* SimpleRoutine mach_notify_no_senders */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dispatch_mach_notify_no_senders
(
	mach_port_t _notify,
	mach_port_mscount_t _mscnt
);

/* SimpleRoutine mach_notify_send_once */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dispatch_mach_notify_send_once
(
	mach_port_t _notify
);

/* SimpleRoutine mach_notify_dead_name */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dispatch_mach_notify_dead_name
(
	mach_port_t _notify,
	mach_port_name_t _name
);

/* SimpleRoutine wakeup_main_thread */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dispatch_wakeup_main_thread
(
	mach_port_t _port
);

/* SimpleRoutine consume_send_once_right */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dispatch_consume_send_once_right
(
	mach_port_t _port
);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
boolean_t libdispatch_internal_protocol_server(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
mig_routine_t libdispatch_internal_protocol_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
extern const struct _dispatch_libdispatch_internal_protocol_subsystem {
	mig_server_routine_t	server;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[16];
} _dispatch_libdispatch_internal_protocol_subsystem;

/* typedefs for all requests */

#ifndef __Request__libdispatch_internal_protocol_subsystem__defined
#define __Request__libdispatch_internal_protocol_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t _name;
	} __Request__mach_notify_port_deleted_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t _name;
	} __Request__mach_notify_send_possible_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t _rights;
		/* end of the kernel processed data */
	} __Request__mach_notify_port_destroyed_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_mscount_t _mscnt;
	} __Request__mach_notify_no_senders_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__mach_notify_send_once_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t _name;
	} __Request__mach_notify_dead_name_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__wakeup_main_thread_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__consume_send_once_right_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__libdispatch_internal_protocol_subsystem__defined */


/* union of all requests */

#ifndef __RequestUnion___dispatch_libdispatch_internal_protocol_subsystem__defined
#define __RequestUnion___dispatch_libdispatch_internal_protocol_subsystem__defined
union __RequestUnion___dispatch_libdispatch_internal_protocol_subsystem {
	__Request__mach_notify_port_deleted_t Request_mach_notify_port_deleted;
	__Request__mach_notify_send_possible_t Request_mach_notify_send_possible;
	__Request__mach_notify_port_destroyed_t Request_mach_notify_port_destroyed;
	__Request__mach_notify_no_senders_t Request_mach_notify_no_senders;
	__Request__mach_notify_send_once_t Request_mach_notify_send_once;
	__Request__mach_notify_dead_name_t Request_mach_notify_dead_name;
	__Request__wakeup_main_thread_t Request_wakeup_main_thread;
	__Request__consume_send_once_right_t Request_consume_send_once_right;
};
#endif /* __RequestUnion___dispatch_libdispatch_internal_protocol_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__libdispatch_internal_protocol_subsystem__defined
#define __Reply__libdispatch_internal_protocol_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_port_deleted_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_send_possible_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_port_destroyed_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_no_senders_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_send_once_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_dead_name_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__wakeup_main_thread_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__consume_send_once_right_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__libdispatch_internal_protocol_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion___dispatch_libdispatch_internal_protocol_subsystem__defined
#define __ReplyUnion___dispatch_libdispatch_internal_protocol_subsystem__defined
union __ReplyUnion___dispatch_libdispatch_internal_protocol_subsystem {
	__Reply__mach_notify_port_deleted_t Reply_mach_notify_port_deleted;
	__Reply__mach_notify_send_possible_t Reply_mach_notify_send_possible;
	__Reply__mach_notify_port_destroyed_t Reply_mach_notify_port_destroyed;
	__Reply__mach_notify_no_senders_t Reply_mach_notify_no_senders;
	__Reply__mach_notify_send_once_t Reply_mach_notify_send_once;
	__Reply__mach_notify_dead_name_t Reply_mach_notify_dead_name;
	__Reply__wakeup_main_thread_t Reply_wakeup_main_thread;
	__Reply__consume_send_once_right_t Reply_consume_send_once_right;
};
#endif /* __RequestUnion___dispatch_libdispatch_internal_protocol_subsystem__defined */

#ifndef subsystem_to_name_map_libdispatch_internal_protocol
#define subsystem_to_name_map_libdispatch_internal_protocol \
    { "mach_notify_port_deleted", 65 },\
    { "mach_notify_send_possible", 66 },\
    { "mach_notify_port_destroyed", 69 },\
    { "mach_notify_no_senders", 70 },\
    { "mach_notify_send_once", 71 },\
    { "mach_notify_dead_name", 72 },\
    { "wakeup_main_thread", 78 },\
    { "consume_send_once_right", 79 }
#endif

#ifdef __AfterMigServerHeader
__AfterMigServerHeader
#endif /* __AfterMigServerHeader */

#endif	 /* _libdispatch_internal_protocol_server_ */
