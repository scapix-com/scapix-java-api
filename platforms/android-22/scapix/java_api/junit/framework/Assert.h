// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JUNIT_FRAMEWORK_ASSERT_FWD
#define SCAPIX_JAVA_API_JUNIT_FRAMEWORK_ASSERT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::junit::framework { class Assert; }

template<>
struct scapix::jni::object_traits<scapix::java_api::junit::framework::Assert>
{
	static constexpr fixed_string class_name = "junit/framework/Assert";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JUNIT_FRAMEWORK_ASSERT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JUNIT_FRAMEWORK_ASSERT)
#define SCAPIX_JAVA_API_JUNIT_FRAMEWORK_ASSERT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class junit::framework::Assert : public jni::object_base<"junit/framework/Assert",
	java::lang::Object>
{
public:

	static void assertTrue(jni::ref<java::lang::String> message, jboolean condition) { return call_static_method<"assertTrue", void>(message, condition); }
	static void assertTrue(jboolean condition) { return call_static_method<"assertTrue", void>(condition); }
	static void assertFalse(jni::ref<java::lang::String> message, jboolean condition) { return call_static_method<"assertFalse", void>(message, condition); }
	static void assertFalse(jboolean condition) { return call_static_method<"assertFalse", void>(condition); }
	static void fail(jni::ref<java::lang::String> message) { return call_static_method<"fail", void>(message); }
	static void fail() { return call_static_method<"fail", void>(); }
	static void assertEquals(jni::ref<java::lang::String> message, jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"assertEquals", void>(message, expected, actual); }
	static void assertEquals(jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"assertEquals", void>(expected, actual); }
	static void assertEquals(jni::ref<java::lang::String> message, jni::ref<java::lang::String> expected, jni::ref<java::lang::String> actual) { return call_static_method<"assertEquals", void>(message, expected, actual); }
	static void assertEquals(jni::ref<java::lang::String> expected, jni::ref<java::lang::String> actual) { return call_static_method<"assertEquals", void>(expected, actual); }
	static void assertEquals(jni::ref<java::lang::String> message, jdouble expected, jdouble p3, jdouble actual) { return call_static_method<"assertEquals", void>(message, expected, p3, actual); }
	static void assertEquals(jdouble expected, jdouble p2, jdouble actual) { return call_static_method<"assertEquals", void>(expected, p2, actual); }
	static void assertEquals(jni::ref<java::lang::String> message, jfloat expected, jfloat actual, jfloat delta) { return call_static_method<"assertEquals", void>(message, expected, actual, delta); }
	static void assertEquals(jfloat expected, jfloat actual, jfloat delta) { return call_static_method<"assertEquals", void>(expected, actual, delta); }
	static void assertEquals(jni::ref<java::lang::String> message, jlong expected, jlong p3) { return call_static_method<"assertEquals", void>(message, expected, p3); }
	static void assertEquals(jlong expected, jlong p2) { return call_static_method<"assertEquals", void>(expected, p2); }
	static void assertEquals(jni::ref<java::lang::String> message, jboolean expected, jboolean actual) { return call_static_method<"assertEquals", void>(message, expected, actual); }
	static void assertEquals(jboolean expected, jboolean actual) { return call_static_method<"assertEquals", void>(expected, actual); }
	static void assertEquals(jni::ref<java::lang::String> message, jbyte expected, jbyte actual) { return call_static_method<"assertEquals", void>(message, expected, actual); }
	static void assertEquals(jbyte expected, jbyte actual) { return call_static_method<"assertEquals", void>(expected, actual); }
	static void assertEquals(jni::ref<java::lang::String> message, jchar expected, jchar actual) { return call_static_method<"assertEquals", void>(message, expected, actual); }
	static void assertEquals(jchar expected, jchar actual) { return call_static_method<"assertEquals", void>(expected, actual); }
	static void assertEquals(jni::ref<java::lang::String> message, jshort expected, jshort actual) { return call_static_method<"assertEquals", void>(message, expected, actual); }
	static void assertEquals(jshort expected, jshort actual) { return call_static_method<"assertEquals", void>(expected, actual); }
	static void assertEquals(jni::ref<java::lang::String> message, jint expected, jint actual) { return call_static_method<"assertEquals", void>(message, expected, actual); }
	static void assertEquals(jint expected, jint actual) { return call_static_method<"assertEquals", void>(expected, actual); }
	static void assertNotNull(jni::ref<java::lang::Object> object) { return call_static_method<"assertNotNull", void>(object); }
	static void assertNotNull(jni::ref<java::lang::String> message, jni::ref<java::lang::Object> object) { return call_static_method<"assertNotNull", void>(message, object); }
	static void assertNull(jni::ref<java::lang::Object> object) { return call_static_method<"assertNull", void>(object); }
	static void assertNull(jni::ref<java::lang::String> message, jni::ref<java::lang::Object> object) { return call_static_method<"assertNull", void>(message, object); }
	static void assertSame(jni::ref<java::lang::String> message, jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"assertSame", void>(message, expected, actual); }
	static void assertSame(jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"assertSame", void>(expected, actual); }
	static void assertNotSame(jni::ref<java::lang::String> message, jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"assertNotSame", void>(message, expected, actual); }
	static void assertNotSame(jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"assertNotSame", void>(expected, actual); }
	static void failSame(jni::ref<java::lang::String> message) { return call_static_method<"failSame", void>(message); }
	static void failNotSame(jni::ref<java::lang::String> message, jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"failNotSame", void>(message, expected, actual); }
	static void failNotEquals(jni::ref<java::lang::String> message, jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"failNotEquals", void>(message, expected, actual); }
	static jni::ref<java::lang::String> format(jni::ref<java::lang::String> message, jni::ref<java::lang::Object> expected, jni::ref<java::lang::Object> actual) { return call_static_method<"format", jni::ref<java::lang::String>>(message, expected, actual); }

protected:

	Assert(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JUNIT_FRAMEWORK_ASSERT