// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SERVICESCATALOG_SERVICEPROVIDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SERVICESCATALOG_SERVICEPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ServicesCatalog_ServiceProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ServicesCatalog_ServiceProvider>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ServicesCatalog$ServiceProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SERVICESCATALOG_SERVICEPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SERVICESCATALOG_SERVICEPROVIDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SERVICESCATALOG_SERVICEPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Module.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::ServicesCatalog_ServiceProvider : public jni::object_base<"jdk/internal/module/ServicesCatalog$ServiceProvider",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::module::ServicesCatalog_ServiceProvider> new_object(jni::ref<java::lang::Module> module, jni::ref<java::lang::String> providerName) { return base_::new_object(module, providerName); }
	jni::ref<java::lang::Module> module() { return call_method<"module", jni::ref<java::lang::Module>>(); }
	jni::ref<java::lang::String> providerName() { return call_method<"providerName", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> ob) { return call_method<"equals", jboolean>(ob); }

protected:

	ServicesCatalog_ServiceProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SERVICESCATALOG_SERVICEPROVIDER
