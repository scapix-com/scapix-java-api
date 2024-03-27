// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEARRAY_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class SparseArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::SparseArray>
{
	static constexpr fixed_string class_name = "android/util/SparseArray";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEARRAY)
#define SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::SparseArray : public jni::object_base<"android/util/SparseArray",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<android::util::SparseArray> new_object() { return base_::new_object(); }
	static jni::ref<android::util::SparseArray> new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
	jni::ref<android::util::SparseArray> clone() { return call_method<"clone", jni::ref<android::util::SparseArray>>(); }
	jboolean contains(jint key) { return call_method<"contains", jboolean>(key); }
	jni::ref<java::lang::Object> get(jint key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::lang::Object> get(jint key, jni::ref<java::lang::Object> valueIfKeyNotFound) { return call_method<"get", jni::ref<java::lang::Object>>(key, valueIfKeyNotFound); }
	void delete_(jint key) { return call_method<"delete", void>(key); }
	void remove(jint key) { return call_method<"remove", void>(key); }
	void removeAt(jint index) { return call_method<"removeAt", void>(index); }
	void removeAtRange(jint index, jint size) { return call_method<"removeAtRange", void>(index, size); }
	void set(jint key, jni::ref<java::lang::Object> value) { return call_method<"set", void>(key, value); }
	void put(jint key, jni::ref<java::lang::Object> value) { return call_method<"put", void>(key, value); }
	jint size() { return call_method<"size", jint>(); }
	jint keyAt(jint index) { return call_method<"keyAt", jint>(index); }
	jni::ref<java::lang::Object> valueAt(jint index) { return call_method<"valueAt", jni::ref<java::lang::Object>>(index); }
	void setValueAt(jint index, jni::ref<java::lang::Object> value) { return call_method<"setValueAt", void>(index, value); }
	jint indexOfKey(jint key) { return call_method<"indexOfKey", jint>(key); }
	jint indexOfValue(jni::ref<java::lang::Object> value) { return call_method<"indexOfValue", jint>(value); }
	void clear() { return call_method<"clear", void>(); }
	void append(jint key, jni::ref<java::lang::Object> value) { return call_method<"append", void>(key, value); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean contentEquals(jni::ref<android::util::SparseArray> other) { return call_method<"contentEquals", jboolean>(other); }
	jint contentHashCode() { return call_method<"contentHashCode", jint>(); }

protected:

	SparseArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_SPARSEARRAY
