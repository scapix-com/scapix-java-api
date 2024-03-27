// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalStateException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ILLEGALRECEIVEEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ILLEGALRECEIVEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::nio::sctp { class IllegalReceiveException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::nio::sctp::IllegalReceiveException>
{
	static constexpr fixed_string class_name = "com/sun/nio/sctp/IllegalReceiveException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalStateException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ILLEGALRECEIVEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ILLEGALRECEIVEEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ILLEGALRECEIVEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::nio::sctp::IllegalReceiveException : public jni::object_base<"com/sun/nio/sctp/IllegalReceiveException",
	java::lang::IllegalStateException>
{
public:

	static jni::ref<com::sun::nio::sctp::IllegalReceiveException> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::nio::sctp::IllegalReceiveException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	IllegalReceiveException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_ILLEGALRECEIVEEXCEPTION