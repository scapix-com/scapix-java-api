// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_EXTENDEDSOCKETOPTIONS_FWD
#define SCAPIX_JAVA_API_SUN_NET_EXTENDEDSOCKETOPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net { class ExtendedSocketOptions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ExtendedSocketOptions>
{
	static constexpr fixed_string class_name = "sun/net/ExtendedSocketOptions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_EXTENDEDSOCKETOPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_EXTENDEDSOCKETOPTIONS)
#define SCAPIX_JAVA_API_SUN_NET_EXTENDEDSOCKETOPTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ExtendedSocketOptions : public jni::object_base<"sun/net/ExtendedSocketOptions",
	java::lang::Object>
{
public:

	static jshort SOCK_STREAM() { return get_static_field<"SOCK_STREAM", jshort>(); }
	static jshort SOCK_DGRAM() { return get_static_field<"SOCK_DGRAM", jshort>(); }

	jboolean isOptionSupported(jni::ref<java::net::SocketOption> p1) { return call_method<"isOptionSupported", jboolean>(p1); }
	jni::ref<java::util::Set> options() { return call_method<"options", jni::ref<java::util::Set>>(); }
	static jni::ref<java::util::Set> serverSocketOptions() { return call_static_method<"serverSocketOptions", jni::ref<java::util::Set>>(); }
	static jni::ref<java::util::Set> clientSocketOptions() { return call_static_method<"clientSocketOptions", jni::ref<java::util::Set>>(); }
	static jni::ref<java::util::Set> datagramSocketOptions() { return call_static_method<"datagramSocketOptions", jni::ref<java::util::Set>>(); }
	void setOption(jni::ref<java::io::FileDescriptor> p1, jni::ref<java::net::SocketOption> p2, jni::ref<java::lang::Object> p3) { return call_method<"setOption", void>(p1, p2, p3); }
	jni::ref<java::lang::Object> getOption(jni::ref<java::io::FileDescriptor> p1, jni::ref<java::net::SocketOption> p2) { return call_method<"getOption", jni::ref<java::lang::Object>>(p1, p2); }
	static jni::ref<sun::net::ExtendedSocketOptions> getInstance() { return call_static_method<"getInstance", jni::ref<sun::net::ExtendedSocketOptions>>(); }
	static void register_(jni::ref<sun::net::ExtendedSocketOptions> p1) { return call_static_method<"register", void>(p1); }

protected:

	ExtendedSocketOptions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_EXTENDEDSOCKETOPTIONS
