// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEDATASTORE_FWD
#define SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEDATASTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::preference { class PreferenceDataStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::preference::PreferenceDataStore>
{
	static constexpr fixed_string class_name = "android/preference/PreferenceDataStore";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEDATASTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEDATASTORE)
#define SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEDATASTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::preference::PreferenceDataStore : public jni::object_base<"android/preference/PreferenceDataStore",
	java::lang::Object>
{
public:

	void putString(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_method<"putString", void>(key, value); }
	void putStringSet(jni::ref<java::lang::String> key, jni::ref<java::util::Set> values) { return call_method<"putStringSet", void>(key, values); }
	void putInt(jni::ref<java::lang::String> key, jint value) { return call_method<"putInt", void>(key, value); }
	void putLong(jni::ref<java::lang::String> key, jlong value) { return call_method<"putLong", void>(key, value); }
	void putFloat(jni::ref<java::lang::String> key, jfloat value) { return call_method<"putFloat", void>(key, value); }
	void putBoolean(jni::ref<java::lang::String> key, jboolean value) { return call_method<"putBoolean", void>(key, value); }
	jni::ref<java::lang::String> getString(jni::ref<java::lang::String> key, jni::ref<java::lang::String> defValue) { return call_method<"getString", jni::ref<java::lang::String>>(key, defValue); }
	jni::ref<java::util::Set> getStringSet(jni::ref<java::lang::String> key, jni::ref<java::util::Set> defValues) { return call_method<"getStringSet", jni::ref<java::util::Set>>(key, defValues); }
	jint getInt(jni::ref<java::lang::String> key, jint defValue) { return call_method<"getInt", jint>(key, defValue); }
	jlong getLong(jni::ref<java::lang::String> key, jlong defValue) { return call_method<"getLong", jlong>(key, defValue); }
	jfloat getFloat(jni::ref<java::lang::String> key, jfloat defValue) { return call_method<"getFloat", jfloat>(key, defValue); }
	jboolean getBoolean(jni::ref<java::lang::String> key, jboolean defValue) { return call_method<"getBoolean", jboolean>(key, defValue); }

protected:

	PreferenceDataStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PREFERENCE_PREFERENCEDATASTORE
