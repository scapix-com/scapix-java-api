// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ServiceLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ServiceLoader>
{
	static constexpr fixed_string class_name = "java/util/ServiceLoader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Iterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER)
#define SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::ServiceLoader : public jni::object_base<"java/util/ServiceLoader",
	java::lang::Object,
	java::lang::Iterable>
{
public:

	void reload() { return call_method<"reload", void>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	static jni::ref<java::util::ServiceLoader> load(jni::ref<java::lang::Class> service, jni::ref<java::lang::ClassLoader> loader) { return call_static_method<"load", jni::ref<java::util::ServiceLoader>>(service, loader); }
	static jni::ref<java::util::ServiceLoader> load(jni::ref<java::lang::Class> service) { return call_static_method<"load", jni::ref<java::util::ServiceLoader>>(service); }
	static jni::ref<java::util::ServiceLoader> loadInstalled(jni::ref<java::lang::Class> service) { return call_static_method<"loadInstalled", jni::ref<java::util::ServiceLoader>>(service); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ServiceLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SERVICELOADER
