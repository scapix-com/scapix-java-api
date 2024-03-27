// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_SERVICE_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_SERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Provider_Service; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Provider_Service>
{
	static constexpr fixed_string class_name = "java/security/Provider$Service";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_SERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_SERVICE)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_SERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::Provider_Service : public jni::object_base<"java/security/Provider$Service",
	java::lang::Object>
{
public:

	static jni::ref<java::security::Provider_Service> new_object(jni::ref<java::security::Provider> provider, jni::ref<java::lang::String> type, jni::ref<java::lang::String> algorithm, jni::ref<java::lang::String> className, jni::ref<java::util::List> aliases, jni::ref<java::util::Map> attributes) { return base_::new_object(provider, type, algorithm, className, aliases, attributes); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAttribute(jni::ref<java::lang::String> name) { return call_method<"getAttribute", jni::ref<java::lang::String>>(name); }
	jni::ref<java::lang::Object> newInstance(jni::ref<java::lang::Object> constructorParameter) { return call_method<"newInstance", jni::ref<java::lang::Object>>(constructorParameter); }
	jboolean supportsParameter(jni::ref<java::lang::Object> parameter) { return call_method<"supportsParameter", jboolean>(parameter); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Provider_Service(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_SERVICE
