// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONERULES_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONERULES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::zone { class ZoneRules; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::zone::ZoneRules>
{
	static constexpr fixed_string class_name = "java/time/zone/ZoneRules";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONERULES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONERULES)
#define SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONERULES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/LocalDateTime.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#include <scapix/java_api/java/time/zone/ZoneOffsetTransition.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::zone::ZoneRules : public jni::object_base<"java/time/zone/ZoneRules",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::zone::ZoneRules> of(jni::ref<java::time::ZoneOffset> p1, jni::ref<java::time::ZoneOffset> p2, jni::ref<java::util::List> p3, jni::ref<java::util::List> p4, jni::ref<java::util::List> p5) { return call_static_method<"of", jni::ref<java::time::zone::ZoneRules>>(p1, p2, p3, p4, p5); }
	static jni::ref<java::time::zone::ZoneRules> of(jni::ref<java::time::ZoneOffset> p1) { return call_static_method<"of", jni::ref<java::time::zone::ZoneRules>>(p1); }
	jboolean isFixedOffset() { return call_method<"isFixedOffset", jboolean>(); }
	jni::ref<java::time::ZoneOffset> getOffset(jni::ref<java::time::Instant> p1) { return call_method<"getOffset", jni::ref<java::time::ZoneOffset>>(p1); }
	jni::ref<java::time::ZoneOffset> getOffset(jni::ref<java::time::LocalDateTime> p1) { return call_method<"getOffset", jni::ref<java::time::ZoneOffset>>(p1); }
	jni::ref<java::util::List> getValidOffsets(jni::ref<java::time::LocalDateTime> p1) { return call_method<"getValidOffsets", jni::ref<java::util::List>>(p1); }
	jni::ref<java::time::zone::ZoneOffsetTransition> getTransition(jni::ref<java::time::LocalDateTime> p1) { return call_method<"getTransition", jni::ref<java::time::zone::ZoneOffsetTransition>>(p1); }
	jni::ref<java::time::ZoneOffset> getStandardOffset(jni::ref<java::time::Instant> p1) { return call_method<"getStandardOffset", jni::ref<java::time::ZoneOffset>>(p1); }
	jni::ref<java::time::Duration> getDaylightSavings(jni::ref<java::time::Instant> p1) { return call_method<"getDaylightSavings", jni::ref<java::time::Duration>>(p1); }
	jboolean isDaylightSavings(jni::ref<java::time::Instant> p1) { return call_method<"isDaylightSavings", jboolean>(p1); }
	jboolean isValidOffset(jni::ref<java::time::LocalDateTime> p1, jni::ref<java::time::ZoneOffset> p2) { return call_method<"isValidOffset", jboolean>(p1, p2); }
	jni::ref<java::time::zone::ZoneOffsetTransition> nextTransition(jni::ref<java::time::Instant> p1) { return call_method<"nextTransition", jni::ref<java::time::zone::ZoneOffsetTransition>>(p1); }
	jni::ref<java::time::zone::ZoneOffsetTransition> previousTransition(jni::ref<java::time::Instant> p1) { return call_method<"previousTransition", jni::ref<java::time::zone::ZoneOffsetTransition>>(p1); }
	jni::ref<java::util::List> getTransitions() { return call_method<"getTransitions", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getTransitionRules() { return call_method<"getTransitionRules", jni::ref<java::util::List>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ZoneRules(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONERULES
