// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/SocketException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_PORTUNREACHABLEEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_PORTUNREACHABLEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class PortUnreachableException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::PortUnreachableException>
{
	static constexpr fixed_string class_name = "java/net/PortUnreachableException";
	using base_classes = std::tuple<scapix::java_api::java::net::SocketException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PORTUNREACHABLEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_PORTUNREACHABLEEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NET_PORTUNREACHABLEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::PortUnreachableException : public jni::object_base<"java/net/PortUnreachableException",
	java::net::SocketException>
{
public:

	static jni::ref<java::net::PortUnreachableException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::net::PortUnreachableException> new_object() { return base_::new_object(); }

protected:

	PortUnreachableException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PORTUNREACHABLEEXCEPTION
