// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ERA_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ERA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class Era; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::Era>
{
	static constexpr fixed_string class_name = "java/time/chrono/Era";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::temporal::TemporalAccessor, scapix::java_api::java::time::temporal::TemporalAdjuster>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ERA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ERA)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ERA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/format/TextStyle.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::Era : public jni::object_base<"java/time/chrono/Era",
	java::lang::Object,
	java::time::temporal::TemporalAccessor,
	java::time::temporal::TemporalAdjuster>
{
public:

	jint getValue() { return call_method<"getValue", jint>(); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"isSupported", jboolean>(field); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(field); }
	jint get(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"get", jint>(field); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"getLong", jlong>(field); }
	jni::ref<java::lang::Object> query(jni::ref<java::time::temporal::TemporalQuery> query) { return call_method<"query", jni::ref<java::lang::Object>>(query); }
	jni::ref<java::time::temporal::Temporal> adjustInto(jni::ref<java::time::temporal::Temporal> temporal) { return call_method<"adjustInto", jni::ref<java::time::temporal::Temporal>>(temporal); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::time::format::TextStyle> style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(style, locale); }

protected:

	Era(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ERA
