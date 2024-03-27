// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SECURITY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SECURITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Security; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Security>
{
	static constexpr fixed_string class_name = "java/security/Security";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SECURITY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SECURITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::Security : public jni::object_base<"java/security/Security",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> getAlgorithmProperty(jni::ref<java::lang::String> algName, jni::ref<java::lang::String> propName) { return call_static_method<"getAlgorithmProperty", jni::ref<java::lang::String>>(algName, propName); }
	static jint insertProviderAt(jni::ref<java::security::Provider> provider, jint position) { return call_static_method<"insertProviderAt", jint>(provider, position); }
	static jint addProvider(jni::ref<java::security::Provider> provider) { return call_static_method<"addProvider", jint>(provider); }
	static void removeProvider(jni::ref<java::lang::String> name) { return call_static_method<"removeProvider", void>(name); }
	static jni::ref<jni::array<java::security::Provider>> getProviders() { return call_static_method<"getProviders", jni::ref<jni::array<java::security::Provider>>>(); }
	static jni::ref<java::security::Provider> getProvider(jni::ref<java::lang::String> name) { return call_static_method<"getProvider", jni::ref<java::security::Provider>>(name); }
	static jni::ref<jni::array<java::security::Provider>> getProviders(jni::ref<java::lang::String> filter) { return call_static_method<"getProviders", jni::ref<jni::array<java::security::Provider>>>(filter); }
	static jni::ref<jni::array<java::security::Provider>> getProviders(jni::ref<java::util::Map> filter) { return call_static_method<"getProviders", jni::ref<jni::array<java::security::Provider>>>(filter); }
	static jni::ref<java::lang::String> getProperty(jni::ref<java::lang::String> key) { return call_static_method<"getProperty", jni::ref<java::lang::String>>(key); }
	static void setProperty(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_static_method<"setProperty", void>(key, value); }
	static jni::ref<java::util::Set> getAlgorithms(jni::ref<java::lang::String> serviceName) { return call_static_method<"getAlgorithms", jni::ref<java::util::Set>>(serviceName); }

protected:

	Security(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURITY
