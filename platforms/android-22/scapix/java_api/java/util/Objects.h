// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_OBJECTS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_OBJECTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Objects; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Objects>
{
	static constexpr fixed_string class_name = "java/util/Objects";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OBJECTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_OBJECTS)
#define SCAPIX_JAVA_API_JAVA_UTIL_OBJECTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Comparator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Objects : public jni::object_base<"java/util/Objects",
	java::lang::Object>
{
public:

	static jint compare(jni::ref<java::lang::Object> a, jni::ref<java::lang::Object> b, jni::ref<java::util::Comparator> c) { return call_static_method<"compare", jint>(a, b, c); }
	static jboolean deepEquals(jni::ref<java::lang::Object> a, jni::ref<java::lang::Object> b) { return call_static_method<"deepEquals", jboolean>(a, b); }
	static jboolean equals(jni::ref<java::lang::Object> a, jni::ref<java::lang::Object> b) { return call_static_method<"equals", jboolean>(a, b); }
	static jint hash(jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"hash", jint>(values); }
	static jint hashCode(jni::ref<java::lang::Object> o) { return call_static_method<"hashCode", jint>(o); }
	static jni::ref<java::lang::Object> requireNonNull(jni::ref<java::lang::Object> o) { return call_static_method<"requireNonNull", jni::ref<java::lang::Object>>(o); }
	static jni::ref<java::lang::Object> requireNonNull(jni::ref<java::lang::Object> o, jni::ref<java::lang::String> message) { return call_static_method<"requireNonNull", jni::ref<java::lang::Object>>(o, message); }
	static jni::ref<java::lang::String> toString(jni::ref<java::lang::Object> o) { return call_static_method<"toString", jni::ref<java::lang::String>>(o); }
	static jni::ref<java::lang::String> toString(jni::ref<java::lang::Object> o, jni::ref<java::lang::String> nullString) { return call_static_method<"toString", jni::ref<java::lang::String>>(o, nullString); }

protected:

	Objects(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OBJECTS
