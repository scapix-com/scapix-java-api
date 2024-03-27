// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map_Entry.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTMAP_SIMPLEENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTMAP_SIMPLEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class AbstractMap_SimpleEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::AbstractMap_SimpleEntry>
{
	static constexpr fixed_string class_name = "java/util/AbstractMap$SimpleEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Map_Entry, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTMAP_SIMPLEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTMAP_SIMPLEENTRY)
#define SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTMAP_SIMPLEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::AbstractMap_SimpleEntry : public jni::object_base<"java/util/AbstractMap$SimpleEntry",
	java::lang::Object,
	java::util::Map_Entry,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::AbstractMap_SimpleEntry> new_object(jni::ref<java::lang::Object> theKey, jni::ref<java::lang::Object> theValue) { return base_::new_object(theKey, theValue); }
	static jni::ref<java::util::AbstractMap_SimpleEntry> new_object(jni::ref<java::util::Map_Entry> copyFrom) { return base_::new_object(copyFrom); }
	jni::ref<java::lang::Object> getKey() { return call_method<"getKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> setValue(jni::ref<java::lang::Object> object) { return call_method<"setValue", jni::ref<java::lang::Object>>(object); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractMap_SimpleEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ABSTRACTMAP_SIMPLEENTRY
