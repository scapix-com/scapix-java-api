// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jca { class Providers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jca::Providers>
{
	static constexpr fixed_string class_name = "sun/security/jca/Providers";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERS)
#define SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/sun/security/jca/ProviderList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::jca::Providers : public jni::object_base<"sun/security/jca/Providers",
	java::lang::Object>
{
public:

	static jni::ref<java::security::Provider> getSunProvider() { return call_static_method<"getSunProvider", jni::ref<java::security::Provider>>(); }
	static jni::ref<java::lang::Object> startJarVerification() { return call_static_method<"startJarVerification", jni::ref<java::lang::Object>>(); }
	static void stopJarVerification(jni::ref<java::lang::Object> p1) { return call_static_method<"stopJarVerification", void>(p1); }
	static jni::ref<sun::security::jca::ProviderList> getProviderList() { return call_static_method<"getProviderList", jni::ref<sun::security::jca::ProviderList>>(); }
	static void setProviderList(jni::ref<sun::security::jca::ProviderList> p1) { return call_static_method<"setProviderList", void>(p1); }
	static jni::ref<sun::security::jca::ProviderList> getFullProviderList() { return call_static_method<"getFullProviderList", jni::ref<sun::security::jca::ProviderList>>(); }
	static jni::ref<sun::security::jca::ProviderList> getThreadProviderList() { return call_static_method<"getThreadProviderList", jni::ref<sun::security::jca::ProviderList>>(); }
	static jni::ref<sun::security::jca::ProviderList> beginThreadProviderList(jni::ref<sun::security::jca::ProviderList> p1) { return call_static_method<"beginThreadProviderList", jni::ref<sun::security::jca::ProviderList>>(p1); }
	static void endThreadProviderList(jni::ref<sun::security::jca::ProviderList> p1) { return call_static_method<"endThreadProviderList", void>(p1); }

protected:

	Providers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JCA_PROVIDERS