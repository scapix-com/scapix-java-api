// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/util/KeyStoreDelegator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_DUALFORMATJKS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_DUALFORMATJKS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class JavaKeyStore_DualFormatJKS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::JavaKeyStore_DualFormatJKS>
{
	static constexpr fixed_string class_name = "sun/security/provider/JavaKeyStore$DualFormatJKS";
	using base_classes = std::tuple<scapix::java_api::sun::security::util::KeyStoreDelegator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_DUALFORMATJKS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_DUALFORMATJKS)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_DUALFORMATJKS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::JavaKeyStore_DualFormatJKS : public jni::object_base<"sun/security/provider/JavaKeyStore$DualFormatJKS",
	sun::security::util::KeyStoreDelegator>
{
public:

	static jni::ref<sun::security::provider::JavaKeyStore_DualFormatJKS> new_object() { return base_::new_object(); }
	jboolean engineProbe(jni::ref<java::io::InputStream> stream) { return call_method<"engineProbe", jboolean>(stream); }

protected:

	JavaKeyStore_DualFormatJKS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_DUALFORMATJKS
