// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_UTIL_INETADDRESSUTILS_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_UTIL_INETADDRESSUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::util { class InetAddressUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::util::InetAddressUtils>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/util/InetAddressUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_UTIL_INETADDRESSUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_UTIL_INETADDRESSUTILS)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_UTIL_INETADDRESSUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::util::InetAddressUtils : public jni::object_base<"org/apache/http/conn/util/InetAddressUtils",
	java::lang::Object>
{
public:

	static jboolean isIPv4Address(jni::ref<java::lang::String> input) { return call_static_method<"isIPv4Address", jboolean>(input); }
	static jboolean isIPv6StdAddress(jni::ref<java::lang::String> input) { return call_static_method<"isIPv6StdAddress", jboolean>(input); }
	static jboolean isIPv6HexCompressedAddress(jni::ref<java::lang::String> input) { return call_static_method<"isIPv6HexCompressedAddress", jboolean>(input); }
	static jboolean isIPv6Address(jni::ref<java::lang::String> input) { return call_static_method<"isIPv6Address", jboolean>(input); }

protected:

	InetAddressUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_UTIL_INETADDRESSUTILS
