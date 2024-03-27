// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_FWD
#define SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::net { class ExtendedSocketOptions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::net::ExtendedSocketOptions>
{
	static constexpr fixed_string class_name = "jdk/net/ExtendedSocketOptions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS)
#define SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/jdk/net/SocketFlow.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::net::ExtendedSocketOptions : public jni::object_base<"jdk/net/ExtendedSocketOptions",
	java::lang::Object>
{
public:

	static jni::ref<java::net::SocketOption> SO_FLOW_SLA() { return get_static_field<"SO_FLOW_SLA", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> TCP_KEEPIDLE() { return get_static_field<"TCP_KEEPIDLE", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> TCP_KEEPINTERVAL() { return get_static_field<"TCP_KEEPINTERVAL", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> TCP_KEEPCOUNT() { return get_static_field<"TCP_KEEPCOUNT", jni::ref<java::net::SocketOption>>(); }

	static void setFlowOption(jni::ref<java::io::FileDescriptor> p1, jni::ref<jdk::net::SocketFlow> p2) { return call_static_method<"setFlowOption", void>(p1, p2); }
	static jint getFlowOption(jni::ref<java::io::FileDescriptor> p1, jni::ref<jdk::net::SocketFlow> p2) { return call_static_method<"getFlowOption", jint>(p1, p2); }

protected:

	ExtendedSocketOptions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS
