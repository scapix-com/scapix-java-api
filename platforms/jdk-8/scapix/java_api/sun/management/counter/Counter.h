// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_COUNTER_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_COUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::counter { class Counter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::counter::Counter>
{
	static constexpr fixed_string class_name = "sun/management/counter/Counter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_COUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_COUNTER)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_COUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/management/counter/Units.h>
#include <scapix/java_api/sun/management/counter/Variability.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::counter::Counter : public jni::object_base<"sun/management/counter/Counter",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<sun::management::counter::Units> getUnits() { return call_method<"getUnits", jni::ref<sun::management::counter::Units>>(); }
	jni::ref<sun::management::counter::Variability> getVariability() { return call_method<"getVariability", jni::ref<sun::management::counter::Variability>>(); }
	jboolean isVector() { return call_method<"isVector", jboolean>(); }
	jint getVectorLength() { return call_method<"getVectorLength", jint>(); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jboolean isInternal() { return call_method<"isInternal", jboolean>(); }
	jint getFlags() { return call_method<"getFlags", jint>(); }

protected:

	Counter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_COUNTER
