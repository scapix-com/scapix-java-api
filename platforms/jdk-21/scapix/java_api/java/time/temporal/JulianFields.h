// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_JULIANFIELDS_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_JULIANFIELDS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::temporal { class JulianFields; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::temporal::JulianFields>
{
	static constexpr fixed_string class_name = "java/time/temporal/JulianFields";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_JULIANFIELDS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_JULIANFIELDS)
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_JULIANFIELDS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::temporal::JulianFields : public jni::object_base<"java/time/temporal/JulianFields",
	java::lang::Object>
{
public:

	static jni::ref<java::time::temporal::TemporalField> JULIAN_DAY() { return get_static_field<"JULIAN_DAY", jni::ref<java::time::temporal::TemporalField>>(); }
	static jni::ref<java::time::temporal::TemporalField> MODIFIED_JULIAN_DAY() { return get_static_field<"MODIFIED_JULIAN_DAY", jni::ref<java::time::temporal::TemporalField>>(); }
	static jni::ref<java::time::temporal::TemporalField> RATA_DIE() { return get_static_field<"RATA_DIE", jni::ref<java::time::temporal::TemporalField>>(); }


protected:

	JulianFields(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_JULIANFIELDS
