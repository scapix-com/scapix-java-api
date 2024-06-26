// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_REQUESTCANCELEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_REQUESTCANCELEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::protocol { class RequestCanceledException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::protocol::RequestCanceledException>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/protocol/RequestCanceledException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_REQUESTCANCELEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_REQUESTCANCELEDEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_REQUESTCANCELEDEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::protocol::RequestCanceledException : public jni::object_base<"com/sun/corba/se/impl/protocol/RequestCanceledException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<com::sun::corba::se::impl::protocol::RequestCanceledException> new_object(jint p1) { return base_::new_object(p1); }
	jint getRequestId() { return call_method<"getRequestId", jint>(); }

protected:

	RequestCanceledException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_REQUESTCANCELEDEXCEPTION
