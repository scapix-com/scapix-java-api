// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_INETADDRESSCACHEPOLICY_FWD
#define SCAPIX_JAVA_API_SUN_NET_INETADDRESSCACHEPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net { class InetAddressCachePolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::InetAddressCachePolicy>
{
	static constexpr fixed_string class_name = "sun/net/InetAddressCachePolicy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_INETADDRESSCACHEPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_INETADDRESSCACHEPOLICY)
#define SCAPIX_JAVA_API_SUN_NET_INETADDRESSCACHEPOLICY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::InetAddressCachePolicy : public jni::object_base<"sun/net/InetAddressCachePolicy",
	java::lang::Object>
{
public:

	static jint FOREVER() { return get_static_field<"FOREVER", jint>(); }
	static jint NEVER() { return get_static_field<"NEVER", jint>(); }
	static jint DEFAULT_POSITIVE() { return get_static_field<"DEFAULT_POSITIVE", jint>(); }

	static jni::ref<sun::net::InetAddressCachePolicy> new_object() { return base_::new_object(); }
	static jint get() { return call_static_method<"get", jint>(); }
	static jint getNegative() { return call_static_method<"getNegative", jint>(); }
	static void setIfNotSet(jint newPolicy) { return call_static_method<"setIfNotSet", void>(newPolicy); }
	static void setNegativeIfNotSet(jint newPolicy) { return call_static_method<"setNegativeIfNotSet", void>(newPolicy); }

protected:

	InetAddressCachePolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_INETADDRESSCACHEPOLICY
