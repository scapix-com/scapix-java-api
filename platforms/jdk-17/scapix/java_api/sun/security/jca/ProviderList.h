// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jca { class ProviderList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jca::ProviderList>
{
	static constexpr fixed_string class_name = "sun/security/jca/ProviderList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST)
#define SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/Provider_Service.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::jca::ProviderList : public jni::object_base<"sun/security/jca/ProviderList",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::jca::ProviderList> add(jni::ref<sun::security::jca::ProviderList> providerList, jni::ref<java::security::Provider> p) { return call_static_method<"add", jni::ref<sun::security::jca::ProviderList>>(providerList, p); }
	static jni::ref<sun::security::jca::ProviderList> insertAt(jni::ref<sun::security::jca::ProviderList> providerList, jni::ref<java::security::Provider> p, jint position) { return call_static_method<"insertAt", jni::ref<sun::security::jca::ProviderList>>(providerList, p, position); }
	static jni::ref<sun::security::jca::ProviderList> remove(jni::ref<sun::security::jca::ProviderList> providerList, jni::ref<java::lang::String> name) { return call_static_method<"remove", jni::ref<sun::security::jca::ProviderList>>(providerList, name); }
	static jni::ref<sun::security::jca::ProviderList> newList(jni::ref<jni::array<java::security::Provider>> providers) { return call_static_method<"newList", jni::ref<sun::security::jca::ProviderList>>(providers); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::List> providers() { return call_method<"providers", jni::ref<java::util::List>>(); }
	jni::ref<java::security::Provider> getProvider(jni::ref<java::lang::String> name) { return call_method<"getProvider", jni::ref<java::security::Provider>>(name); }
	jint getIndex(jni::ref<java::lang::String> name) { return call_method<"getIndex", jint>(name); }
	jni::ref<jni::array<java::security::Provider>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::security::Provider>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::Provider_Service> getService(jni::ref<java::lang::String> type, jni::ref<java::lang::String> name) { return call_method<"getService", jni::ref<java::security::Provider_Service>>(type, name); }
	jni::ref<java::util::List> getServices(jni::ref<java::lang::String> type, jni::ref<java::lang::String> algorithm) { return call_method<"getServices", jni::ref<java::util::List>>(type, algorithm); }
	jni::ref<java::util::List> getServices(jni::ref<java::lang::String> type, jni::ref<java::util::List> algorithms) { return call_method<"getServices", jni::ref<java::util::List>>(type, algorithms); }
	jni::ref<java::util::List> getServices(jni::ref<java::util::List> ids) { return call_method<"getServices", jni::ref<java::util::List>>(ids); }

protected:

	ProviderList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERLIST
