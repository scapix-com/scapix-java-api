// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LEVEL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LEVEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::logging { class Level; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::logging::Level>
{
	static constexpr fixed_string class_name = "java/util/logging/Level";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LEVEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LEVEL)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LEVEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::logging::Level : public jni::object_base<"java/util/logging/Level",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::logging::Level> OFF() { return get_static_field<"OFF", jni::ref<java::util::logging::Level>>(); }
	static jni::ref<java::util::logging::Level> SEVERE() { return get_static_field<"SEVERE", jni::ref<java::util::logging::Level>>(); }
	static jni::ref<java::util::logging::Level> WARNING() { return get_static_field<"WARNING", jni::ref<java::util::logging::Level>>(); }
	static jni::ref<java::util::logging::Level> INFO() { return get_static_field<"INFO", jni::ref<java::util::logging::Level>>(); }
	static jni::ref<java::util::logging::Level> CONFIG() { return get_static_field<"CONFIG", jni::ref<java::util::logging::Level>>(); }
	static jni::ref<java::util::logging::Level> FINE() { return get_static_field<"FINE", jni::ref<java::util::logging::Level>>(); }
	static jni::ref<java::util::logging::Level> FINER() { return get_static_field<"FINER", jni::ref<java::util::logging::Level>>(); }
	static jni::ref<java::util::logging::Level> FINEST() { return get_static_field<"FINEST", jni::ref<java::util::logging::Level>>(); }
	static jni::ref<java::util::logging::Level> ALL() { return get_static_field<"ALL", jni::ref<java::util::logging::Level>>(); }

	jni::ref<java::lang::String> getResourceBundleName() { return call_method<"getResourceBundleName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLocalizedName() { return call_method<"getLocalizedName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	static jni::ref<java::util::logging::Level> parse(jni::ref<java::lang::String> p1) { return call_static_method<"parse", jni::ref<java::util::logging::Level>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Level(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LEVEL