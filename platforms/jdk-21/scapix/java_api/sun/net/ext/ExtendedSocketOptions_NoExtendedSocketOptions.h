// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/ext/ExtendedSocketOptions.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_EXT_EXTENDEDSOCKETOPTIONS_NOEXTENDEDSOCKETOPTIONS_FWD
#define SCAPIX_JAVA_API_SUN_NET_EXT_EXTENDEDSOCKETOPTIONS_NOEXTENDEDSOCKETOPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::ext { class ExtendedSocketOptions_NoExtendedSocketOptions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ext::ExtendedSocketOptions_NoExtendedSocketOptions>
{
	static constexpr fixed_string class_name = "sun/net/ext/ExtendedSocketOptions$NoExtendedSocketOptions";
	using base_classes = std::tuple<scapix::java_api::sun::net::ext::ExtendedSocketOptions>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_EXT_EXTENDEDSOCKETOPTIONS_NOEXTENDEDSOCKETOPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_EXT_EXTENDEDSOCKETOPTIONS_NOEXTENDEDSOCKETOPTIONS)
#define SCAPIX_JAVA_API_SUN_NET_EXT_EXTENDEDSOCKETOPTIONS_NOEXTENDEDSOCKETOPTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/SocketOption.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::ext::ExtendedSocketOptions_NoExtendedSocketOptions : public jni::object_base<"sun/net/ext/ExtendedSocketOptions$NoExtendedSocketOptions",
	sun::net::ext::ExtendedSocketOptions>
{
public:

	void setOption(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::net::SocketOption> option, jni::ref<java::lang::Object> value, jboolean isIPv6) { return call_method<"setOption", void>(fd, option, value, isIPv6); }
	jni::ref<java::lang::Object> getOption(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::net::SocketOption> option, jboolean isIPv6) { return call_method<"getOption", jni::ref<java::lang::Object>>(fd, option, isIPv6); }

protected:

	ExtendedSocketOptions_NoExtendedSocketOptions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_EXT_EXTENDEDSOCKETOPTIONS_NOEXTENDEDSOCKETOPTIONS
