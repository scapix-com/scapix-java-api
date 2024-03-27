// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_SCDYNAMICSTORECONFIG_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_SCDYNAMICSTORECONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5 { class SCDynamicStoreConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::SCDynamicStoreConfig>
{
	static constexpr fixed_string class_name = "sun/security/krb5/SCDynamicStoreConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_SCDYNAMICSTORECONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_SCDYNAMICSTORECONFIG)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_SCDYNAMICSTORECONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Hashtable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::SCDynamicStoreConfig : public jni::object_base<"sun/security/krb5/SCDynamicStoreConfig",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::SCDynamicStoreConfig> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Hashtable> getConfig() { return call_static_method<"getConfig", jni::ref<java::util::Hashtable>>(); }

protected:

	SCDynamicStoreConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_SCDYNAMICSTORECONFIG
