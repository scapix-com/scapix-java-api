// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_UNKNOWNSERVICEEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_UNKNOWNSERVICEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class UnknownServiceException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::UnknownServiceException>
{
	static constexpr fixed_string class_name = "java/net/UnknownServiceException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_UNKNOWNSERVICEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_UNKNOWNSERVICEEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NET_UNKNOWNSERVICEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::UnknownServiceException : public jni::object_base<"java/net/UnknownServiceException",
	java::io::IOException>
{
public:

	static jni::ref<java::net::UnknownServiceException> new_object() { return base_::new_object(); }
	static jni::ref<java::net::UnknownServiceException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	UnknownServiceException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_UNKNOWNSERVICEEXCEPTION
