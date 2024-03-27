// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_ISOFIELDS_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_ISOFIELDS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::temporal { class IsoFields; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::temporal::IsoFields>
{
	static constexpr fixed_string class_name = "java/time/temporal/IsoFields";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_ISOFIELDS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_ISOFIELDS)
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_ISOFIELDS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::temporal::IsoFields : public jni::object_base<"java/time/temporal/IsoFields",
	java::lang::Object>
{
public:

	static jni::ref<java::time::temporal::TemporalField> DAY_OF_QUARTER() { return get_static_field<"DAY_OF_QUARTER", jni::ref<java::time::temporal::TemporalField>>(); }
	static jni::ref<java::time::temporal::TemporalField> QUARTER_OF_YEAR() { return get_static_field<"QUARTER_OF_YEAR", jni::ref<java::time::temporal::TemporalField>>(); }
	static jni::ref<java::time::temporal::TemporalUnit> QUARTER_YEARS() { return get_static_field<"QUARTER_YEARS", jni::ref<java::time::temporal::TemporalUnit>>(); }
	static jni::ref<java::time::temporal::TemporalField> WEEK_BASED_YEAR() { return get_static_field<"WEEK_BASED_YEAR", jni::ref<java::time::temporal::TemporalField>>(); }
	static jni::ref<java::time::temporal::TemporalUnit> WEEK_BASED_YEARS() { return get_static_field<"WEEK_BASED_YEARS", jni::ref<java::time::temporal::TemporalUnit>>(); }
	static jni::ref<java::time::temporal::TemporalField> WEEK_OF_WEEK_BASED_YEAR() { return get_static_field<"WEEK_OF_WEEK_BASED_YEAR", jni::ref<java::time::temporal::TemporalField>>(); }


protected:

	IsoFields(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_ISOFIELDS