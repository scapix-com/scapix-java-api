// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_INTERNALPRIVATEKEY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_INTERNALPRIVATEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class InternalPrivateKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::InternalPrivateKey>
{
	static constexpr fixed_string class_name = "sun/security/util/InternalPrivateKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_INTERNALPRIVATEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_INTERNALPRIVATEKEY)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_INTERNALPRIVATEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/PublicKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::InternalPrivateKey : public jni::object_base<"sun/security/util/InternalPrivateKey",
	java::lang::Object>
{
public:

	jni::ref<java::security::PublicKey> calculatePublicKey() { return call_method<"calculatePublicKey", jni::ref<java::security::PublicKey>>(); }

protected:

	InternalPrivateKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_INTERNALPRIVATEKEY
