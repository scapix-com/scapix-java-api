// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_PREFERREDENTRY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_PREFERREDENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jca { class ProviderList_PreferredEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jca::ProviderList_PreferredEntry>
{
	static constexpr fixed_string class_name = "sun/security/jca/ProviderList$PreferredEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_PREFERREDENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_PREFERREDENTRY)
#define SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_PREFERREDENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::jca::ProviderList_PreferredEntry : public jni::object_base<"sun/security/jca/ProviderList$PreferredEntry",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ProviderList_PreferredEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_PREFERREDENTRY