// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_POLICYUTIL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_POLICYUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class PolicyUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::PolicyUtil>
{
	static constexpr fixed_string class_name = "sun/security/util/PolicyUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_POLICYUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_POLICYUTIL)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_POLICYUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/KeyStore.h>
#include <scapix/java_api/sun/security/util/Debug.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::PolicyUtil : public jni::object_base<"sun/security/util/PolicyUtil",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::PolicyUtil> new_object() { return base_::new_object(); }
	static jni::ref<java::io::InputStream> getInputStream(jni::ref<java::net::URL> url) { return call_static_method<"getInputStream", jni::ref<java::io::InputStream>>(url); }
	static jni::ref<java::security::KeyStore> getKeyStore(jni::ref<java::net::URL> policyUrl, jni::ref<java::lang::String> keyStoreName, jni::ref<java::lang::String> keyStoreType, jni::ref<java::lang::String> keyStoreProvider, jni::ref<java::lang::String> storePassURL, jni::ref<sun::security::util::Debug> debug) { return call_static_method<"getKeyStore", jni::ref<java::security::KeyStore>>(policyUrl, keyStoreName, keyStoreType, keyStoreProvider, storePassURL, debug); }

protected:

	PolicyUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_POLICYUTIL
