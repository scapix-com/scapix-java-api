// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/counter/Counter.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_STRINGCOUNTER_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_STRINGCOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::counter { class StringCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::counter::StringCounter>
{
	static constexpr fixed_string class_name = "sun/management/counter/StringCounter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::counter::Counter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_STRINGCOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_STRINGCOUNTER)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_STRINGCOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::counter::StringCounter : public jni::object_base<"sun/management/counter/StringCounter",
	java::lang::Object,
	sun::management::counter::Counter>
{
public:

	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }

protected:

	StringCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_STRINGCOUNTER
