// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_SOCKETOPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_SOCKETOPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class SocketOption; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::SocketOption>
{
	static constexpr fixed_string class_name = "java/net/SocketOption";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_SOCKETOPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_SOCKETOPTION)
#define SCAPIX_JAVA_API_JAVA_NET_SOCKETOPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::SocketOption : public jni::object_base<"java/net/SocketOption",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Class> type() { return call_method<"type", jni::ref<java::lang::Class>>(); }

protected:

	SocketOption(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_SOCKETOPTION
