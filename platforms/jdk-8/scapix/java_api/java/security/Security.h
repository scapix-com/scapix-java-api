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

	static jni::ref<java::lang::String> getAlgorithmProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getAlgorithmProperty", jni::ref<java::lang::String>>(p1, p2); }
	static jint insertProviderAt(jni::ref<java::security::Provider> p1, jint p2) { return call_static_method<"insertProviderAt", jint>(p1, p2); }
	static jint addProvider(jni::ref<java::security::Provider> p1) { return call_static_method<"addProvider", jint>(p1); }
	static void removeProvider(jni::ref<java::lang::String> p1) { return call_static_method<"removeProvider", void>(p1); }
	static jni::ref<jni::array<java::security::Provider>> getProviders() { return call_static_method<"getProviders", jni::ref<jni::array<java::security::Provider>>>(); }
	static jni::ref<java::security::Provider> getProvider(jni::ref<java::lang::String> p1) { return call_static_method<"getProvider", jni::ref<java::security::Provider>>(p1); }
	static jni::ref<jni::array<java::security::Provider>> getProviders(jni::ref<java::lang::String> p1) { return call_static_method<"getProviders", jni::ref<jni::array<java::security::Provider>>>(p1); }
	static jni::ref<jni::array<java::security::Provider>> getProviders(jni::ref<java::util::Map> p1) { return call_static_method<"getProviders", jni::ref<jni::array<java::security::Provider>>>(p1); }
	static jni::ref<java::lang::String> getProperty(jni::ref<java::lang::String> p1) { return call_static_method<"getProperty", jni::ref<java::lang::String>>(p1); }
	static void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"setProperty", void>(p1, p2); }
	static jni::ref<java::util::Set> getAlgorithms(jni::ref<java::lang::String> p1) { return call_static_method<"getAlgorithms", jni::ref<java::util::Set>>(p1); }

protected:

	Security(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURITY
