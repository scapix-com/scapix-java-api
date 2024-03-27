// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_MAP_ENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_MAP_ENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Map_Entry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Map_Entry>
{
	static constexpr fixed_string class_name = "java/util/Map$Entry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_MAP_ENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_MAP_ENTRY)
#define SCAPIX_JAVA_API_JAVA_UTIL_MAP_ENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Map_Entry : public jni::object_base<"java/util/Map$Entry",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Object> getKey() { return call_method<"getKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> setValue(jni::ref<java::lang::Object> p1) { return call_method<"setValue", jni::ref<java::lang::Object>>(p1); }

protected:

	Map_Entry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_MAP_ENTRY
