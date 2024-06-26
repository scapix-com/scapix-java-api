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
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Objects : public jni::object_base<"java/util/Objects",
	java::lang::Object>
{
public:

	static jboolean equals(jni::ref<java::lang::Object> a, jni::ref<java::lang::Object> b) { return call_static_method<"equals", jboolean>(a, b); }
	static jboolean deepEquals(jni::ref<java::lang::Object> a, jni::ref<java::lang::Object> b) { return call_static_method<"deepEquals", jboolean>(a, b); }
	static jint hashCode(jni::ref<java::lang::Object> o) { return call_static_method<"hashCode", jint>(o); }
	static jint hash(jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"hash", jint>(values); }
	static jni::ref<java::lang::String> toString(jni::ref<java::lang::Object> o) { return call_static_method<"toString", jni::ref<java::lang::String>>(o); }
	static jni::ref<java::lang::String> toString(jni::ref<java::lang::Object> o, jni::ref<java::lang::String> nullDefault) { return call_static_method<"toString", jni::ref<java::lang::String>>(o, nullDefault); }
	static jint compare(jni::ref<java::lang::Object> a, jni::ref<java::lang::Object> b, jni::ref<java::util::Comparator> c) { return call_static_method<"compare", jint>(a, b, c); }
	static jni::ref<java::lang::Object> requireNonNull(jni::ref<java::lang::Object> obj) { return call_static_method<"requireNonNull", jni::ref<java::lang::Object>>(obj); }
	static jni::ref<java::lang::Object> requireNonNull(jni::ref<java::lang::Object> obj, jni::ref<java::lang::String> message) { return call_static_method<"requireNonNull", jni::ref<java::lang::Object>>(obj, message); }
	static jboolean isNull(jni::ref<java::lang::Object> obj) { return call_static_method<"isNull", jboolean>(obj); }
	static jboolean nonNull(jni::ref<java::lang::Object> obj) { return call_static_method<"nonNull", jboolean>(obj); }
	static jni::ref<java::lang::Object> requireNonNullElse(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Object> defaultObj) { return call_static_method<"requireNonNullElse", jni::ref<java::lang::Object>>(obj, defaultObj); }
	static jni::ref<java::lang::Object> requireNonNullElseGet(jni::ref<java::lang::Object> obj, jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"requireNonNullElseGet", jni::ref<java::lang::Object>>(obj, supplier); }
	static jni::ref<java::lang::Object> requireNonNull(jni::ref<java::lang::Object> obj, jni::ref<java::util::function::Supplier> messageSupplier) { return call_static_method<"requireNonNull", jni::ref<java::lang::Object>>(obj, messageSupplier); }
	static jint checkIndex(jint index, jint length) { return call_static_method<"checkIndex", jint>(index, length); }
	static jint checkFromToIndex(jint fromIndex, jint toIndex, jint length) { return call_static_method<"checkFromToIndex", jint>(fromIndex, toIndex, length); }
	static jint checkFromIndexSize(jint fromIndex, jint size, jint length) { return call_static_method<"checkFromIndexSize", jint>(fromIndex, size, length); }
	static jlong checkIndex(jlong index, jlong p2) { return call_static_method<"checkIndex", jlong>(index, p2); }
	static jlong checkFromToIndex(jlong fromIndex, jlong p2, jlong toIndex) { return call_static_method<"checkFromToIndex", jlong>(fromIndex, p2, toIndex); }
	static jlong checkFromIndexSize(jlong fromIndex, jlong p2, jlong size) { return call_static_method<"checkFromIndexSize", jlong>(fromIndex, p2, size); }

protected:

	Objects(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OBJECTS
