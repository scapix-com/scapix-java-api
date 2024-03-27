// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/Chronology.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class AbstractChronology; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::AbstractChronology>
{
	static constexpr fixed_string class_name = "java/time/chrono/AbstractChronology";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::chrono::Chronology>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDate.h>
#include <scapix/java_api/java/time/format/ResolverStyle.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::AbstractChronology : public jni::object_base<"java/time/chrono/AbstractChronology",
	java::lang::Object,
	java::time::chrono::Chronology>
{
public:

	jni::ref<java::time::chrono::ChronoLocalDate> resolveDate(jni::ref<java::util::Map> p1, jni::ref<java::time::format::ResolverStyle> p2) { return call_method<"resolveDate", jni::ref<java::time::chrono::ChronoLocalDate>>(p1, p2); }
	jint compareTo(jni::ref<java::time::chrono::Chronology> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractChronology(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_ABSTRACTCHRONOLOGY
