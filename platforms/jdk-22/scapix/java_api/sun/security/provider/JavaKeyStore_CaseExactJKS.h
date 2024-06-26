// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/JavaKeyStore.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_CASEEXACTJKS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_CASEEXACTJKS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class JavaKeyStore_CaseExactJKS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::JavaKeyStore_CaseExactJKS>
{
	static constexpr fixed_string class_name = "sun/security/provider/JavaKeyStore$CaseExactJKS";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::JavaKeyStore>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_CASEEXACTJKS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_CASEEXACTJKS)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_CASEEXACTJKS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::JavaKeyStore_CaseExactJKS : public jni::object_base<"sun/security/provider/JavaKeyStore$CaseExactJKS",
	sun::security::provider::JavaKeyStore>
{
public:

	static jni::ref<sun::security::provider::JavaKeyStore_CaseExactJKS> new_object() { return base_::new_object(); }

protected:

	JavaKeyStore_CaseExactJKS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_CASEEXACTJKS
