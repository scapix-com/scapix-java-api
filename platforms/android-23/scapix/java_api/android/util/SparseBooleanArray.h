// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEBOOLEANARRAY_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEBOOLEANARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class SparseBooleanArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::SparseBooleanArray>
{
	static constexpr fixed_string class_name = "android/util/SparseBooleanArray";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEBOOLEANARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEBOOLEANARRAY)
#define SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEBOOLEANARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::SparseBooleanArray : public jni::object_base<"android/util/SparseBooleanArray",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<android::util::SparseBooleanArray> new_object() { return base_::new_object(); }
	static jni::ref<android::util::SparseBooleanArray> new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
	jni::ref<android::util::SparseBooleanArray> clone() { return call_method<"clone", jni::ref<android::util::SparseBooleanArray>>(); }
	jboolean get(jint key) { return call_method<"get", jboolean>(key); }
	jboolean get(jint key, jboolean valueIfKeyNotFound) { return call_method<"get", jboolean>(key, valueIfKeyNotFound); }
	void delete_(jint key) { return call_method<"delete", void>(key); }
	void put(jint key, jboolean value) { return call_method<"put", void>(key, value); }
	jint size() { return call_method<"size", jint>(); }
	jint keyAt(jint index) { return call_method<"keyAt", jint>(index); }
	jboolean valueAt(jint index) { return call_method<"valueAt", jboolean>(index); }
	jint indexOfKey(jint key) { return call_method<"indexOfKey", jint>(key); }
	jint indexOfValue(jboolean value) { return call_method<"indexOfValue", jint>(value); }
	void clear() { return call_method<"clear", void>(); }
	void append(jint key, jboolean value) { return call_method<"append", void>(key, value); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SparseBooleanArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEBOOLEANARRAY