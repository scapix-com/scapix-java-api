// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/Supplier.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_PROVIDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_PROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ServiceLoader_Provider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ServiceLoader_Provider>
{
	static constexpr fixed_string class_name = "java/util/ServiceLoader$Provider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::Supplier>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_PROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_PROVIDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_PROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::ServiceLoader_Provider : public jni::object_base<"java/util/ServiceLoader$Provider",
	java::lang::Object,
	java::util::function::Supplier>
{
public:

	jni::ref<java::lang::Class> type() { return call_method<"type", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }

protected:

	ServiceLoader_Provider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_PROVIDER
