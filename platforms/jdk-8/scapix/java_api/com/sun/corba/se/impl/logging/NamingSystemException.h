// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/logging/LogWrapperBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_NAMINGSYSTEMEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_NAMINGSYSTEMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::logging { class NamingSystemException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::logging::NamingSystemException>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/logging/NamingSystemException";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::logging::LogWrapperBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_NAMINGSYSTEMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_NAMINGSYSTEMEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_NAMINGSYSTEMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/logging/Logger.h>
#include <scapix/java_api/org/omg/CORBA/BAD_PARAM.h>
#include <scapix/java_api/org/omg/CORBA/CompletionStatus.h>
#include <scapix/java_api/org/omg/CORBA/INITIALIZE.h>
#include <scapix/java_api/org/omg/CORBA/INTERNAL.h>
#include <scapix/java_api/org/omg/CORBA/UNKNOWN.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::logging::NamingSystemException : public jni::object_base<"com/sun/corba/se/impl/logging/NamingSystemException",
	com::sun::corba::se::spi::logging::LogWrapperBase>
{
public:

	static jint TRANSIENT_NAME_SERVER_BAD_PORT() { return get_static_field<"TRANSIENT_NAME_SERVER_BAD_PORT", jint>(); }
	static jint TRANSIENT_NAME_SERVER_BAD_HOST() { return get_static_field<"TRANSIENT_NAME_SERVER_BAD_HOST", jint>(); }
	static jint OBJECT_IS_NULL() { return get_static_field<"OBJECT_IS_NULL", jint>(); }
	static jint INS_BAD_ADDRESS() { return get_static_field<"INS_BAD_ADDRESS", jint>(); }
	static jint BIND_UPDATE_CONTEXT_FAILED() { return get_static_field<"BIND_UPDATE_CONTEXT_FAILED", jint>(); }
	static jint BIND_FAILURE() { return get_static_field<"BIND_FAILURE", jint>(); }
	static jint RESOLVE_CONVERSION_FAILURE() { return get_static_field<"RESOLVE_CONVERSION_FAILURE", jint>(); }
	static jint RESOLVE_FAILURE() { return get_static_field<"RESOLVE_FAILURE", jint>(); }
	static jint UNBIND_FAILURE() { return get_static_field<"UNBIND_FAILURE", jint>(); }
	static jint TRANS_NS_CANNOT_CREATE_INITIAL_NC_SYS() { return get_static_field<"TRANS_NS_CANNOT_CREATE_INITIAL_NC_SYS", jint>(); }
	static jint TRANS_NS_CANNOT_CREATE_INITIAL_NC() { return get_static_field<"TRANS_NS_CANNOT_CREATE_INITIAL_NC", jint>(); }
	static jint NAMING_CTX_REBIND_ALREADY_BOUND() { return get_static_field<"NAMING_CTX_REBIND_ALREADY_BOUND", jint>(); }
	static jint NAMING_CTX_REBINDCTX_ALREADY_BOUND() { return get_static_field<"NAMING_CTX_REBINDCTX_ALREADY_BOUND", jint>(); }
	static jint NAMING_CTX_BAD_BINDINGTYPE() { return get_static_field<"NAMING_CTX_BAD_BINDINGTYPE", jint>(); }
	static jint NAMING_CTX_RESOLVE_CANNOT_NARROW_TO_CTX() { return get_static_field<"NAMING_CTX_RESOLVE_CANNOT_NARROW_TO_CTX", jint>(); }
	static jint NAMING_CTX_BINDING_ITERATOR_CREATE() { return get_static_field<"NAMING_CTX_BINDING_ITERATOR_CREATE", jint>(); }
	static jint TRANS_NC_BIND_ALREADY_BOUND() { return get_static_field<"TRANS_NC_BIND_ALREADY_BOUND", jint>(); }
	static jint TRANS_NC_LIST_GOT_EXC() { return get_static_field<"TRANS_NC_LIST_GOT_EXC", jint>(); }
	static jint TRANS_NC_NEWCTX_GOT_EXC() { return get_static_field<"TRANS_NC_NEWCTX_GOT_EXC", jint>(); }
	static jint TRANS_NC_DESTROY_GOT_EXC() { return get_static_field<"TRANS_NC_DESTROY_GOT_EXC", jint>(); }
	static jint INS_BAD_SCHEME_NAME() { return get_static_field<"INS_BAD_SCHEME_NAME", jint>(); }
	static jint INS_BAD_SCHEME_SPECIFIC_PART() { return get_static_field<"INS_BAD_SCHEME_SPECIFIC_PART", jint>(); }
	static jint INS_OTHER() { return get_static_field<"INS_OTHER", jint>(); }

	static jni::ref<com::sun::corba::se::impl::logging::NamingSystemException> new_object(jni::ref<java::util::logging::Logger> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::impl::logging::NamingSystemException> get(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<java::lang::String> p2) { return call_static_method<"get", jni::ref<com::sun::corba::se::impl::logging::NamingSystemException>>(p1, p2); }
	static jni::ref<com::sun::corba::se::impl::logging::NamingSystemException> get(jni::ref<java::lang::String> p1) { return call_static_method<"get", jni::ref<com::sun::corba::se::impl::logging::NamingSystemException>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> transientNameServerBadPort(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"transientNameServerBadPort", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_PARAM> transientNameServerBadPort(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"transientNameServerBadPort", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> transientNameServerBadPort(jni::ref<java::lang::Throwable> p1) { return call_method<"transientNameServerBadPort", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> transientNameServerBadPort() { return call_method<"transientNameServerBadPort", jni::ref<org::omg::CORBA::BAD_PARAM>>(); }
	jni::ref<org::omg::CORBA::BAD_PARAM> transientNameServerBadHost(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"transientNameServerBadHost", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_PARAM> transientNameServerBadHost(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"transientNameServerBadHost", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> transientNameServerBadHost(jni::ref<java::lang::Throwable> p1) { return call_method<"transientNameServerBadHost", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> transientNameServerBadHost() { return call_method<"transientNameServerBadHost", jni::ref<org::omg::CORBA::BAD_PARAM>>(); }
	jni::ref<org::omg::CORBA::BAD_PARAM> objectIsNull(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"objectIsNull", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_PARAM> objectIsNull(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"objectIsNull", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> objectIsNull(jni::ref<java::lang::Throwable> p1) { return call_method<"objectIsNull", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> objectIsNull() { return call_method<"objectIsNull", jni::ref<org::omg::CORBA::BAD_PARAM>>(); }
	jni::ref<org::omg::CORBA::BAD_PARAM> insBadAddress(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"insBadAddress", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_PARAM> insBadAddress(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"insBadAddress", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> insBadAddress(jni::ref<java::lang::Throwable> p1) { return call_method<"insBadAddress", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> insBadAddress() { return call_method<"insBadAddress", jni::ref<org::omg::CORBA::BAD_PARAM>>(); }
	jni::ref<org::omg::CORBA::UNKNOWN> bindUpdateContextFailed(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"bindUpdateContextFailed", jni::ref<org::omg::CORBA::UNKNOWN>>(p1, p2); }
	jni::ref<org::omg::CORBA::UNKNOWN> bindUpdateContextFailed(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"bindUpdateContextFailed", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> bindUpdateContextFailed(jni::ref<java::lang::Throwable> p1) { return call_method<"bindUpdateContextFailed", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> bindUpdateContextFailed() { return call_method<"bindUpdateContextFailed", jni::ref<org::omg::CORBA::UNKNOWN>>(); }
	jni::ref<org::omg::CORBA::UNKNOWN> bindFailure(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"bindFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1, p2); }
	jni::ref<org::omg::CORBA::UNKNOWN> bindFailure(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"bindFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> bindFailure(jni::ref<java::lang::Throwable> p1) { return call_method<"bindFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> bindFailure() { return call_method<"bindFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(); }
	jni::ref<org::omg::CORBA::UNKNOWN> resolveConversionFailure(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"resolveConversionFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1, p2); }
	jni::ref<org::omg::CORBA::UNKNOWN> resolveConversionFailure(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"resolveConversionFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> resolveConversionFailure(jni::ref<java::lang::Throwable> p1) { return call_method<"resolveConversionFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> resolveConversionFailure() { return call_method<"resolveConversionFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(); }
	jni::ref<org::omg::CORBA::UNKNOWN> resolveFailure(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"resolveFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1, p2); }
	jni::ref<org::omg::CORBA::UNKNOWN> resolveFailure(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"resolveFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> resolveFailure(jni::ref<java::lang::Throwable> p1) { return call_method<"resolveFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> resolveFailure() { return call_method<"resolveFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(); }
	jni::ref<org::omg::CORBA::UNKNOWN> unbindFailure(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"unbindFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1, p2); }
	jni::ref<org::omg::CORBA::UNKNOWN> unbindFailure(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"unbindFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> unbindFailure(jni::ref<java::lang::Throwable> p1) { return call_method<"unbindFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> unbindFailure() { return call_method<"unbindFailure", jni::ref<org::omg::CORBA::UNKNOWN>>(); }
	jni::ref<org::omg::CORBA::INITIALIZE> transNsCannotCreateInitialNcSys(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"transNsCannotCreateInitialNcSys", jni::ref<org::omg::CORBA::INITIALIZE>>(p1, p2); }
	jni::ref<org::omg::CORBA::INITIALIZE> transNsCannotCreateInitialNcSys(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"transNsCannotCreateInitialNcSys", jni::ref<org::omg::CORBA::INITIALIZE>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> transNsCannotCreateInitialNcSys(jni::ref<java::lang::Throwable> p1) { return call_method<"transNsCannotCreateInitialNcSys", jni::ref<org::omg::CORBA::INITIALIZE>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> transNsCannotCreateInitialNcSys() { return call_method<"transNsCannotCreateInitialNcSys", jni::ref<org::omg::CORBA::INITIALIZE>>(); }
	jni::ref<org::omg::CORBA::INITIALIZE> transNsCannotCreateInitialNc(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"transNsCannotCreateInitialNc", jni::ref<org::omg::CORBA::INITIALIZE>>(p1, p2); }
	jni::ref<org::omg::CORBA::INITIALIZE> transNsCannotCreateInitialNc(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"transNsCannotCreateInitialNc", jni::ref<org::omg::CORBA::INITIALIZE>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> transNsCannotCreateInitialNc(jni::ref<java::lang::Throwable> p1) { return call_method<"transNsCannotCreateInitialNc", jni::ref<org::omg::CORBA::INITIALIZE>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> transNsCannotCreateInitialNc() { return call_method<"transNsCannotCreateInitialNc", jni::ref<org::omg::CORBA::INITIALIZE>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxRebindAlreadyBound(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"namingCtxRebindAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxRebindAlreadyBound(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"namingCtxRebindAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxRebindAlreadyBound(jni::ref<java::lang::Throwable> p1) { return call_method<"namingCtxRebindAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxRebindAlreadyBound() { return call_method<"namingCtxRebindAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxRebindctxAlreadyBound(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"namingCtxRebindctxAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxRebindctxAlreadyBound(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"namingCtxRebindctxAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxRebindctxAlreadyBound(jni::ref<java::lang::Throwable> p1) { return call_method<"namingCtxRebindctxAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxRebindctxAlreadyBound() { return call_method<"namingCtxRebindctxAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxBadBindingtype(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"namingCtxBadBindingtype", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxBadBindingtype(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"namingCtxBadBindingtype", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxBadBindingtype(jni::ref<java::lang::Throwable> p1) { return call_method<"namingCtxBadBindingtype", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxBadBindingtype() { return call_method<"namingCtxBadBindingtype", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxResolveCannotNarrowToCtx(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"namingCtxResolveCannotNarrowToCtx", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxResolveCannotNarrowToCtx(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"namingCtxResolveCannotNarrowToCtx", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxResolveCannotNarrowToCtx(jni::ref<java::lang::Throwable> p1) { return call_method<"namingCtxResolveCannotNarrowToCtx", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxResolveCannotNarrowToCtx() { return call_method<"namingCtxResolveCannotNarrowToCtx", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxBindingIteratorCreate(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"namingCtxBindingIteratorCreate", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxBindingIteratorCreate(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"namingCtxBindingIteratorCreate", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxBindingIteratorCreate(jni::ref<java::lang::Throwable> p1) { return call_method<"namingCtxBindingIteratorCreate", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> namingCtxBindingIteratorCreate() { return call_method<"namingCtxBindingIteratorCreate", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcBindAlreadyBound(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"transNcBindAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcBindAlreadyBound(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"transNcBindAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcBindAlreadyBound(jni::ref<java::lang::Throwable> p1) { return call_method<"transNcBindAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcBindAlreadyBound() { return call_method<"transNcBindAlreadyBound", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcListGotExc(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"transNcListGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcListGotExc(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"transNcListGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcListGotExc(jni::ref<java::lang::Throwable> p1) { return call_method<"transNcListGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcListGotExc() { return call_method<"transNcListGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcNewctxGotExc(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"transNcNewctxGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcNewctxGotExc(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"transNcNewctxGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcNewctxGotExc(jni::ref<java::lang::Throwable> p1) { return call_method<"transNcNewctxGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcNewctxGotExc() { return call_method<"transNcNewctxGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcDestroyGotExc(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"transNcDestroyGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcDestroyGotExc(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"transNcDestroyGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcDestroyGotExc(jni::ref<java::lang::Throwable> p1) { return call_method<"transNcDestroyGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> transNcDestroyGotExc() { return call_method<"transNcDestroyGotExc", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> insBadSchemeName(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"insBadSchemeName", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> insBadSchemeName(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"insBadSchemeName", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> insBadSchemeName(jni::ref<java::lang::Throwable> p1) { return call_method<"insBadSchemeName", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> insBadSchemeName() { return call_method<"insBadSchemeName", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> insBadSchemeSpecificPart(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"insBadSchemeSpecificPart", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> insBadSchemeSpecificPart(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"insBadSchemeSpecificPart", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> insBadSchemeSpecificPart(jni::ref<java::lang::Throwable> p1) { return call_method<"insBadSchemeSpecificPart", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> insBadSchemeSpecificPart() { return call_method<"insBadSchemeSpecificPart", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> insOther(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"insOther", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> insOther(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"insOther", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> insOther(jni::ref<java::lang::Throwable> p1) { return call_method<"insOther", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> insOther() { return call_method<"insOther", jni::ref<org::omg::CORBA::INTERNAL>>(); }

protected:

	NamingSystemException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_NAMINGSYSTEMEXCEPTION