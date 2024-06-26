// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_LRUCACHE_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_LRUCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class LruCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::LruCache>
{
	static constexpr fixed_string class_name = "android/util/LruCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_LRUCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_LRUCACHE)
#define SCAPIX_JAVA_API_ANDROID_UTIL_LRUCACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::LruCache : public jni::object_base<"android/util/LruCache",
	java::lang::Object>
{
public:

	static jni::ref<android::util::LruCache> new_object(jint maxSize) { return base_::new_object(maxSize); }
	void resize(jint maxSize) { return call_method<"resize", void>(maxSize); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"put", jni::ref<java::lang::Object>>(key, value); }
	void trimToSize(jint maxSize) { return call_method<"trimToSize", void>(maxSize); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> key) { return call_method<"remove", jni::ref<java::lang::Object>>(key); }
	void evictAll() { return call_method<"evictAll", void>(); }
	jint size() { return call_method<"size", jint>(); }
	jint maxSize() { return call_method<"maxSize", jint>(); }
	jint hitCount() { return call_method<"hitCount", jint>(); }
	jint missCount() { return call_method<"missCount", jint>(); }
	jint createCount() { return call_method<"createCount", jint>(); }
	jint putCount() { return call_method<"putCount", jint>(); }
	jint evictionCount() { return call_method<"evictionCount", jint>(); }
	jni::ref<java::util::Map> snapshot() { return call_method<"snapshot", jni::ref<java::util::Map>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	LruCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_LRUCACHE
