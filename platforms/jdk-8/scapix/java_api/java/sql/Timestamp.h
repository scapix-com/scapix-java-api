// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Date.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_TIMESTAMP_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_TIMESTAMP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class Timestamp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::Timestamp>
{
	static constexpr fixed_string class_name = "java/sql/Timestamp";
	using base_classes = std::tuple<scapix::java_api::java::util::Date>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_TIMESTAMP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_TIMESTAMP)
#define SCAPIX_JAVA_API_JAVA_SQL_TIMESTAMP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/LocalDateTime.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::Timestamp : public jni::object_base<"java/sql/Timestamp",
	java::util::Date>
{
public:

	static jni::ref<java::sql::Timestamp> new_object(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<java::sql::Timestamp> new_object(jlong p1) { return base_::new_object(p1); }
	void setTime(jlong p1) { return call_method<"setTime", void>(p1); }
	jlong getTime() { return call_method<"getTime", jlong>(); }
	static jni::ref<java::sql::Timestamp> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::sql::Timestamp>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getNanos() { return call_method<"getNanos", jint>(); }
	void setNanos(jint p1) { return call_method<"setNanos", void>(p1); }
	jboolean equals(jni::ref<java::sql::Timestamp> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean before(jni::ref<java::sql::Timestamp> p1) { return call_method<"before", jboolean>(p1); }
	jboolean after(jni::ref<java::sql::Timestamp> p1) { return call_method<"after", jboolean>(p1); }
	jint compareTo(jni::ref<java::sql::Timestamp> p1) { return call_method<"compareTo", jint>(p1); }
	jint compareTo(jni::ref<java::util::Date> p1) { return call_method<"compareTo", jint>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<java::sql::Timestamp> valueOf(jni::ref<java::time::LocalDateTime> p1) { return call_static_method<"valueOf", jni::ref<java::sql::Timestamp>>(p1); }
	jni::ref<java::time::LocalDateTime> toLocalDateTime() { return call_method<"toLocalDateTime", jni::ref<java::time::LocalDateTime>>(); }
	static jni::ref<java::sql::Timestamp> from(jni::ref<java::time::Instant> p1) { return call_static_method<"from", jni::ref<java::sql::Timestamp>>(p1); }
	jni::ref<java::time::Instant> toInstant() { return call_method<"toInstant", jni::ref<java::time::Instant>>(); }

protected:

	Timestamp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_TIMESTAMP