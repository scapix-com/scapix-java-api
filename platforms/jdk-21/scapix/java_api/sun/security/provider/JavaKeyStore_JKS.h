// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/JavaKeyStore.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_JKS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_JKS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class JavaKeyStore_JKS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::JavaKeyStore_JKS>
{
	static constexpr fixed_string class_name = "sun/security/provider/JavaKeyStore$JKS";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::JavaKeyStore>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_JKS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_JKS)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_JKS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::JavaKeyStore_JKS : public jni::object_base<"sun/security/provider/JavaKeyStore$JKS",
	sun::security::provider::JavaKeyStore>
{
public:

	static jni::ref<sun::security::provider::JavaKeyStore_JKS> new_object() { return base_::new_object(); }

protected:

	JavaKeyStore_JKS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_JKS
