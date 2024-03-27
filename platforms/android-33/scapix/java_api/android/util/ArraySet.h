// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_ARRAYSET_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_ARRAYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class ArraySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::ArraySet>
{
	static constexpr fixed_string class_name = "android/util/ArraySet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Collection, scapix::java_api::java::util::Set>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_ARRAYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_ARRAYSET)
#define SCAPIX_JAVA_API_ANDROID_UTIL_ARRAYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::ArraySet : public jni::object_base<"android/util/ArraySet",
	java::lang::Object,
	java::util::Collection,
	java::util::Set>
{
public:

	static jni::ref<android::util::ArraySet> new_object() { return base_::new_object(); }
	static jni::ref<android::util::ArraySet> new_object(jint capacity) { return base_::new_object(capacity); }
	static jni::ref<android::util::ArraySet> new_object(jni::ref<android::util::ArraySet> set) { return base_::new_object(set); }
	static jni::ref<android::util::ArraySet> new_object(jni::ref<java::util::Collection> set) { return base_::new_object(set); }
	static jni::ref<android::util::ArraySet> new_object(jni::ref<jni::array<java::lang::Object>> array) { return base_::new_object(array); }
	void clear() { return call_method<"clear", void>(); }
	void ensureCapacity(jint minimumCapacity) { return call_method<"ensureCapacity", void>(minimumCapacity); }
	jboolean contains(jni::ref<java::lang::Object> key) { return call_method<"contains", jboolean>(key); }
	jint indexOf(jni::ref<java::lang::Object> key) { return call_method<"indexOf", jint>(key); }
	jni::ref<java::lang::Object> valueAt(jint index) { return call_method<"valueAt", jni::ref<java::lang::Object>>(index); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean add(jni::ref<java::lang::Object> value) { return call_method<"add", jboolean>(value); }
	void addAll(jni::ref<android::util::ArraySet> array) { return call_method<"addAll", void>(array); }
	jboolean remove(jni::ref<java::lang::Object> object) { return call_method<"remove", jboolean>(object); }
	jni::ref<java::lang::Object> removeAt(jint index) { return call_method<"removeAt", jni::ref<java::lang::Object>>(index); }
	jboolean removeAll(jni::ref<android::util::ArraySet> array) { return call_method<"removeAll", jboolean>(array); }
	jboolean removeIf(jni::ref<java::util::function::Predicate> filter) { return call_method<"removeIf", jboolean>(filter); }
	jint size() { return call_method<"size", jint>(); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> array) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(array); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean containsAll(jni::ref<java::util::Collection> collection) { return call_method<"containsAll", jboolean>(collection); }
	jboolean addAll(jni::ref<java::util::Collection> collection) { return call_method<"addAll", jboolean>(collection); }
	jboolean removeAll(jni::ref<java::util::Collection> collection) { return call_method<"removeAll", jboolean>(collection); }
	jboolean retainAll(jni::ref<java::util::Collection> collection) { return call_method<"retainAll", jboolean>(collection); }

protected:

	ArraySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_ARRAYSET
