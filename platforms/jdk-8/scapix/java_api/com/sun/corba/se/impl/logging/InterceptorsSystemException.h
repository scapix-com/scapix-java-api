// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/logging/LogWrapperBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_INTERCEPTORSSYSTEMEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_INTERCEPTORSSYSTEMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::logging { class InterceptorsSystemException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::logging::InterceptorsSystemException>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/logging/InterceptorsSystemException";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::logging::LogWrapperBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_INTERCEPTORSSYSTEMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_INTERCEPTORSSYSTEMEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_INTERCEPTORSSYSTEMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/logging/Logger.h>
#include <scapix/java_api/org/omg/CORBA/BAD_INV_ORDER.h>
#include <scapix/java_api/org/omg/CORBA/BAD_PARAM.h>
#include <scapix/java_api/org/omg/CORBA/COMM_FAILURE.h>
#include <scapix/java_api/org/omg/CORBA/CompletionStatus.h>
#include <scapix/java_api/org/omg/CORBA/INTERNAL.h>
#include <scapix/java_api/org/omg/CORBA/NO_IMPLEMENT.h>
#include <scapix/java_api/org/omg/CORBA/OBJECT_NOT_EXIST.h>
#include <scapix/java_api/org/omg/CORBA/UNKNOWN.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::logging::InterceptorsSystemException : public jni::object_base<"com/sun/corba/se/impl/logging/InterceptorsSystemException",
	com::sun::corba::se::spi::logging::LogWrapperBase>
{
public:

	static jint TYPE_OUT_OF_RANGE() { return get_static_field<"TYPE_OUT_OF_RANGE", jint>(); }
	static jint NAME_NULL() { return get_static_field<"NAME_NULL", jint>(); }
	static jint RIR_INVALID_PRE_INIT() { return get_static_field<"RIR_INVALID_PRE_INIT", jint>(); }
	static jint BAD_STATE1() { return get_static_field<"BAD_STATE1", jint>(); }
	static jint BAD_STATE2() { return get_static_field<"BAD_STATE2", jint>(); }
	static jint IOEXCEPTION_DURING_CANCEL_REQUEST() { return get_static_field<"IOEXCEPTION_DURING_CANCEL_REQUEST", jint>(); }
	static jint EXCEPTION_WAS_NULL() { return get_static_field<"EXCEPTION_WAS_NULL", jint>(); }
	static jint OBJECT_HAS_NO_DELEGATE() { return get_static_field<"OBJECT_HAS_NO_DELEGATE", jint>(); }
	static jint DELEGATE_NOT_CLIENTSUB() { return get_static_field<"DELEGATE_NOT_CLIENTSUB", jint>(); }
	static jint OBJECT_NOT_OBJECTIMPL() { return get_static_field<"OBJECT_NOT_OBJECTIMPL", jint>(); }
	static jint EXCEPTION_INVALID() { return get_static_field<"EXCEPTION_INVALID", jint>(); }
	static jint REPLY_STATUS_NOT_INIT() { return get_static_field<"REPLY_STATUS_NOT_INIT", jint>(); }
	static jint EXCEPTION_IN_ARGUMENTS() { return get_static_field<"EXCEPTION_IN_ARGUMENTS", jint>(); }
	static jint EXCEPTION_IN_EXCEPTIONS() { return get_static_field<"EXCEPTION_IN_EXCEPTIONS", jint>(); }
	static jint EXCEPTION_IN_CONTEXTS() { return get_static_field<"EXCEPTION_IN_CONTEXTS", jint>(); }
	static jint EXCEPTION_WAS_NULL_2() { return get_static_field<"EXCEPTION_WAS_NULL_2", jint>(); }
	static jint SERVANT_INVALID() { return get_static_field<"SERVANT_INVALID", jint>(); }
	static jint CANT_POP_ONLY_PICURRENT() { return get_static_field<"CANT_POP_ONLY_PICURRENT", jint>(); }
	static jint CANT_POP_ONLY_CURRENT_2() { return get_static_field<"CANT_POP_ONLY_CURRENT_2", jint>(); }
	static jint PI_DSI_RESULT_IS_NULL() { return get_static_field<"PI_DSI_RESULT_IS_NULL", jint>(); }
	static jint PI_DII_RESULT_IS_NULL() { return get_static_field<"PI_DII_RESULT_IS_NULL", jint>(); }
	static jint EXCEPTION_UNAVAILABLE() { return get_static_field<"EXCEPTION_UNAVAILABLE", jint>(); }
	static jint CLIENT_INFO_STACK_NULL() { return get_static_field<"CLIENT_INFO_STACK_NULL", jint>(); }
	static jint SERVER_INFO_STACK_NULL() { return get_static_field<"SERVER_INFO_STACK_NULL", jint>(); }
	static jint MARK_AND_RESET_FAILED() { return get_static_field<"MARK_AND_RESET_FAILED", jint>(); }
	static jint SLOT_TABLE_INVARIANT() { return get_static_field<"SLOT_TABLE_INVARIANT", jint>(); }
	static jint INTERCEPTOR_LIST_LOCKED() { return get_static_field<"INTERCEPTOR_LIST_LOCKED", jint>(); }
	static jint SORT_SIZE_MISMATCH() { return get_static_field<"SORT_SIZE_MISMATCH", jint>(); }
	static jint PI_ORB_NOT_POLICY_BASED() { return get_static_field<"PI_ORB_NOT_POLICY_BASED", jint>(); }
	static jint ORBINITINFO_INVALID() { return get_static_field<"ORBINITINFO_INVALID", jint>(); }
	static jint UNKNOWN_REQUEST_INVOKE() { return get_static_field<"UNKNOWN_REQUEST_INVOKE", jint>(); }

	static jni::ref<com::sun::corba::se::impl::logging::InterceptorsSystemException> new_object(jni::ref<java::util::logging::Logger> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::impl::logging::InterceptorsSystemException> get(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<java::lang::String> p2) { return call_static_method<"get", jni::ref<com::sun::corba::se::impl::logging::InterceptorsSystemException>>(p1, p2); }
	static jni::ref<com::sun::corba::se::impl::logging::InterceptorsSystemException> get(jni::ref<java::lang::String> p1) { return call_static_method<"get", jni::ref<com::sun::corba::se::impl::logging::InterceptorsSystemException>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> typeOutOfRange(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2, jni::ref<java::lang::Object> p3) { return call_method<"typeOutOfRange", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::BAD_PARAM> typeOutOfRange(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Object> p2) { return call_method<"typeOutOfRange", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_PARAM> typeOutOfRange(jni::ref<java::lang::Throwable> p1, jni::ref<java::lang::Object> p2) { return call_method<"typeOutOfRange", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_PARAM> typeOutOfRange(jni::ref<java::lang::Object> p1) { return call_method<"typeOutOfRange", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> nameNull(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"nameNull", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_PARAM> nameNull(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"nameNull", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> nameNull(jni::ref<java::lang::Throwable> p1) { return call_method<"nameNull", jni::ref<org::omg::CORBA::BAD_PARAM>>(p1); }
	jni::ref<org::omg::CORBA::BAD_PARAM> nameNull() { return call_method<"nameNull", jni::ref<org::omg::CORBA::BAD_PARAM>>(); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> rirInvalidPreInit(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"rirInvalidPreInit", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> rirInvalidPreInit(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"rirInvalidPreInit", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> rirInvalidPreInit(jni::ref<java::lang::Throwable> p1) { return call_method<"rirInvalidPreInit", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> rirInvalidPreInit() { return call_method<"rirInvalidPreInit", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> badState1(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2, jni::ref<java::lang::Object> p3, jni::ref<java::lang::Object> p4) { return call_method<"badState1", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2, p3, p4); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> badState1(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"badState1", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> badState1(jni::ref<java::lang::Throwable> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"badState1", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> badState1(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"badState1", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> badState2(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2, jni::ref<java::lang::Object> p3, jni::ref<java::lang::Object> p4, jni::ref<java::lang::Object> p5) { return call_method<"badState2", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2, p3, p4, p5); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> badState2(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3, jni::ref<java::lang::Object> p4) { return call_method<"badState2", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2, p3, p4); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> badState2(jni::ref<java::lang::Throwable> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3, jni::ref<java::lang::Object> p4) { return call_method<"badState2", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2, p3, p4); }
	jni::ref<org::omg::CORBA::BAD_INV_ORDER> badState2(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"badState2", jni::ref<org::omg::CORBA::BAD_INV_ORDER>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::COMM_FAILURE> ioexceptionDuringCancelRequest(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"ioexceptionDuringCancelRequest", jni::ref<org::omg::CORBA::COMM_FAILURE>>(p1, p2); }
	jni::ref<org::omg::CORBA::COMM_FAILURE> ioexceptionDuringCancelRequest(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"ioexceptionDuringCancelRequest", jni::ref<org::omg::CORBA::COMM_FAILURE>>(p1); }
	jni::ref<org::omg::CORBA::COMM_FAILURE> ioexceptionDuringCancelRequest(jni::ref<java::lang::Throwable> p1) { return call_method<"ioexceptionDuringCancelRequest", jni::ref<org::omg::CORBA::COMM_FAILURE>>(p1); }
	jni::ref<org::omg::CORBA::COMM_FAILURE> ioexceptionDuringCancelRequest() { return call_method<"ioexceptionDuringCancelRequest", jni::ref<org::omg::CORBA::COMM_FAILURE>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionWasNull(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"exceptionWasNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionWasNull(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"exceptionWasNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionWasNull(jni::ref<java::lang::Throwable> p1) { return call_method<"exceptionWasNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionWasNull() { return call_method<"exceptionWasNull", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> objectHasNoDelegate(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"objectHasNoDelegate", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> objectHasNoDelegate(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"objectHasNoDelegate", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> objectHasNoDelegate(jni::ref<java::lang::Throwable> p1) { return call_method<"objectHasNoDelegate", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> objectHasNoDelegate() { return call_method<"objectHasNoDelegate", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> delegateNotClientsub(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"delegateNotClientsub", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> delegateNotClientsub(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"delegateNotClientsub", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> delegateNotClientsub(jni::ref<java::lang::Throwable> p1) { return call_method<"delegateNotClientsub", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> delegateNotClientsub() { return call_method<"delegateNotClientsub", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> objectNotObjectimpl(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"objectNotObjectimpl", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> objectNotObjectimpl(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"objectNotObjectimpl", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> objectNotObjectimpl(jni::ref<java::lang::Throwable> p1) { return call_method<"objectNotObjectimpl", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> objectNotObjectimpl() { return call_method<"objectNotObjectimpl", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInvalid(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"exceptionInvalid", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInvalid(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"exceptionInvalid", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInvalid(jni::ref<java::lang::Throwable> p1) { return call_method<"exceptionInvalid", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInvalid() { return call_method<"exceptionInvalid", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> replyStatusNotInit(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"replyStatusNotInit", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> replyStatusNotInit(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"replyStatusNotInit", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> replyStatusNotInit(jni::ref<java::lang::Throwable> p1) { return call_method<"replyStatusNotInit", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> replyStatusNotInit() { return call_method<"replyStatusNotInit", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInArguments(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"exceptionInArguments", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInArguments(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"exceptionInArguments", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInArguments(jni::ref<java::lang::Throwable> p1) { return call_method<"exceptionInArguments", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInArguments() { return call_method<"exceptionInArguments", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInExceptions(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"exceptionInExceptions", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInExceptions(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"exceptionInExceptions", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInExceptions(jni::ref<java::lang::Throwable> p1) { return call_method<"exceptionInExceptions", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInExceptions() { return call_method<"exceptionInExceptions", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInContexts(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"exceptionInContexts", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInContexts(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"exceptionInContexts", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInContexts(jni::ref<java::lang::Throwable> p1) { return call_method<"exceptionInContexts", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionInContexts() { return call_method<"exceptionInContexts", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionWasNull2(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"exceptionWasNull2", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionWasNull2(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"exceptionWasNull2", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionWasNull2(jni::ref<java::lang::Throwable> p1) { return call_method<"exceptionWasNull2", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionWasNull2() { return call_method<"exceptionWasNull2", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> servantInvalid(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"servantInvalid", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> servantInvalid(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"servantInvalid", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> servantInvalid(jni::ref<java::lang::Throwable> p1) { return call_method<"servantInvalid", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> servantInvalid() { return call_method<"servantInvalid", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> cantPopOnlyPicurrent(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"cantPopOnlyPicurrent", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> cantPopOnlyPicurrent(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"cantPopOnlyPicurrent", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> cantPopOnlyPicurrent(jni::ref<java::lang::Throwable> p1) { return call_method<"cantPopOnlyPicurrent", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> cantPopOnlyPicurrent() { return call_method<"cantPopOnlyPicurrent", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> cantPopOnlyCurrent2(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"cantPopOnlyCurrent2", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> cantPopOnlyCurrent2(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"cantPopOnlyCurrent2", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> cantPopOnlyCurrent2(jni::ref<java::lang::Throwable> p1) { return call_method<"cantPopOnlyCurrent2", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> cantPopOnlyCurrent2() { return call_method<"cantPopOnlyCurrent2", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> piDsiResultIsNull(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"piDsiResultIsNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> piDsiResultIsNull(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"piDsiResultIsNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> piDsiResultIsNull(jni::ref<java::lang::Throwable> p1) { return call_method<"piDsiResultIsNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> piDsiResultIsNull() { return call_method<"piDsiResultIsNull", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> piDiiResultIsNull(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"piDiiResultIsNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> piDiiResultIsNull(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"piDiiResultIsNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> piDiiResultIsNull(jni::ref<java::lang::Throwable> p1) { return call_method<"piDiiResultIsNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> piDiiResultIsNull() { return call_method<"piDiiResultIsNull", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionUnavailable(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"exceptionUnavailable", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionUnavailable(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"exceptionUnavailable", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionUnavailable(jni::ref<java::lang::Throwable> p1) { return call_method<"exceptionUnavailable", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> exceptionUnavailable() { return call_method<"exceptionUnavailable", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> clientInfoStackNull(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"clientInfoStackNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> clientInfoStackNull(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"clientInfoStackNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> clientInfoStackNull(jni::ref<java::lang::Throwable> p1) { return call_method<"clientInfoStackNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> clientInfoStackNull() { return call_method<"clientInfoStackNull", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> serverInfoStackNull(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"serverInfoStackNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> serverInfoStackNull(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"serverInfoStackNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> serverInfoStackNull(jni::ref<java::lang::Throwable> p1) { return call_method<"serverInfoStackNull", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> serverInfoStackNull() { return call_method<"serverInfoStackNull", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> markAndResetFailed(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"markAndResetFailed", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> markAndResetFailed(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"markAndResetFailed", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> markAndResetFailed(jni::ref<java::lang::Throwable> p1) { return call_method<"markAndResetFailed", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> markAndResetFailed() { return call_method<"markAndResetFailed", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> slotTableInvariant(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2, jni::ref<java::lang::Object> p3, jni::ref<java::lang::Object> p4) { return call_method<"slotTableInvariant", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2, p3, p4); }
	jni::ref<org::omg::CORBA::INTERNAL> slotTableInvariant(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"slotTableInvariant", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::INTERNAL> slotTableInvariant(jni::ref<java::lang::Throwable> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"slotTableInvariant", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::INTERNAL> slotTableInvariant(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"slotTableInvariant", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> interceptorListLocked(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"interceptorListLocked", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> interceptorListLocked(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"interceptorListLocked", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> interceptorListLocked(jni::ref<java::lang::Throwable> p1) { return call_method<"interceptorListLocked", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> interceptorListLocked() { return call_method<"interceptorListLocked", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> sortSizeMismatch(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"sortSizeMismatch", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> sortSizeMismatch(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"sortSizeMismatch", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> sortSizeMismatch(jni::ref<java::lang::Throwable> p1) { return call_method<"sortSizeMismatch", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> sortSizeMismatch() { return call_method<"sortSizeMismatch", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::NO_IMPLEMENT> piOrbNotPolicyBased(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"piOrbNotPolicyBased", jni::ref<org::omg::CORBA::NO_IMPLEMENT>>(p1, p2); }
	jni::ref<org::omg::CORBA::NO_IMPLEMENT> piOrbNotPolicyBased(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"piOrbNotPolicyBased", jni::ref<org::omg::CORBA::NO_IMPLEMENT>>(p1); }
	jni::ref<org::omg::CORBA::NO_IMPLEMENT> piOrbNotPolicyBased(jni::ref<java::lang::Throwable> p1) { return call_method<"piOrbNotPolicyBased", jni::ref<org::omg::CORBA::NO_IMPLEMENT>>(p1); }
	jni::ref<org::omg::CORBA::NO_IMPLEMENT> piOrbNotPolicyBased() { return call_method<"piOrbNotPolicyBased", jni::ref<org::omg::CORBA::NO_IMPLEMENT>>(); }
	jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST> orbinitinfoInvalid(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"orbinitinfoInvalid", jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST>>(p1, p2); }
	jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST> orbinitinfoInvalid(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"orbinitinfoInvalid", jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST>>(p1); }
	jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST> orbinitinfoInvalid(jni::ref<java::lang::Throwable> p1) { return call_method<"orbinitinfoInvalid", jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST>>(p1); }
	jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST> orbinitinfoInvalid() { return call_method<"orbinitinfoInvalid", jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST>>(); }
	jni::ref<org::omg::CORBA::UNKNOWN> unknownRequestInvoke(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"unknownRequestInvoke", jni::ref<org::omg::CORBA::UNKNOWN>>(p1, p2); }
	jni::ref<org::omg::CORBA::UNKNOWN> unknownRequestInvoke(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"unknownRequestInvoke", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> unknownRequestInvoke(jni::ref<java::lang::Throwable> p1) { return call_method<"unknownRequestInvoke", jni::ref<org::omg::CORBA::UNKNOWN>>(p1); }
	jni::ref<org::omg::CORBA::UNKNOWN> unknownRequestInvoke() { return call_method<"unknownRequestInvoke", jni::ref<org::omg::CORBA::UNKNOWN>>(); }

protected:

	InterceptorsSystemException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_INTERCEPTORSSYSTEMEXCEPTION