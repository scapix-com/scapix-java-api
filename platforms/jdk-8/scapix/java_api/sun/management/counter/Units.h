// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_UNITS_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_UNITS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::counter { class Units; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::counter::Units>
{
	static constexpr fixed_string class_name = "sun/management/counter/Units";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_UNITS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_UNITS)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_UNITS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::counter::Units : public jni::object_base<"sun/management/counter/Units",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<sun::management::counter::Units> INVALID() { return get_static_field<"INVALID", jni::ref<sun::management::counter::Units>>(); }
	static jni::ref<sun::management::counter::Units> NONE() { return get_static_field<"NONE", jni::ref<sun::management::counter::Units>>(); }
	static jni::ref<sun::management::counter::Units> BYTES() { return get_static_field<"BYTES", jni::ref<sun::management::counter::Units>>(); }
	static jni::ref<sun::management::counter::Units> TICKS() { return get_static_field<"TICKS", jni::ref<sun::management::counter::Units>>(); }
	static jni::ref<sun::management::counter::Units> EVENTS() { return get_static_field<"EVENTS", jni::ref<sun::management::counter::Units>>(); }
	static jni::ref<sun::management::counter::Units> STRING() { return get_static_field<"STRING", jni::ref<sun::management::counter::Units>>(); }
	static jni::ref<sun::management::counter::Units> HERTZ() { return get_static_field<"HERTZ", jni::ref<sun::management::counter::Units>>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	static jni::ref<sun::management::counter::Units> toUnits(jint p1) { return call_static_method<"toUnits", jni::ref<sun::management::counter::Units>>(p1); }

protected:

	Units(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_UNITS