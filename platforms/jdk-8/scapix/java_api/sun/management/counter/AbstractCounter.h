// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/counter/Counter.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::counter { class AbstractCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::counter::AbstractCounter>
{
	static constexpr fixed_string class_name = "sun/management/counter/AbstractCounter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::counter::Counter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/management/counter/Units.h>
#include <scapix/java_api/sun/management/counter/Variability.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::counter::AbstractCounter : public jni::object_base<"sun/management/counter/AbstractCounter",
	java::lang::Object,
	sun::management::counter::Counter>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<sun::management::counter::Units> getUnits() { return call_method<"getUnits", jni::ref<sun::management::counter::Units>>(); }
	jni::ref<sun::management::counter::Variability> getVariability() { return call_method<"getVariability", jni::ref<sun::management::counter::Variability>>(); }
	jboolean isVector() { return call_method<"isVector", jboolean>(); }
	jint getVectorLength() { return call_method<"getVectorLength", jint>(); }
	jboolean isInternal() { return call_method<"isInternal", jboolean>(); }
	jint getFlags() { return call_method<"getFlags", jint>(); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER
