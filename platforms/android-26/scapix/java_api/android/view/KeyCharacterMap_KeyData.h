// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class KeyCharacterMap_KeyData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::KeyCharacterMap_KeyData>
{
	static constexpr fixed_string class_name = "android/view/KeyCharacterMap$KeyData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA)
#define SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::KeyCharacterMap_KeyData : public jni::object_base<"android/view/KeyCharacterMap$KeyData",
	java::lang::Object>
{
public:

	static jint META_LENGTH() { return get_static_field<"META_LENGTH", jint>(); }
	jchar displayLabel() { return get_field<"displayLabel", jchar>(); }
	void displayLabel(jchar v) { set_field<"displayLabel", jchar>(v); }
	jni::ref<jni::array<jchar>> meta() { return get_field<"meta", jni::ref<jni::array<jchar>>>(); }
	void meta(jni::ref<jni::array<jchar>> v) { set_field<"meta", jni::ref<jni::array<jchar>>>(v); }
	jchar number() { return get_field<"number", jchar>(); }
	void number(jchar v) { set_field<"number", jchar>(v); }

	static jni::ref<android::view::KeyCharacterMap_KeyData> new_object() { return base_::new_object(); }

protected:

	KeyCharacterMap_KeyData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA
