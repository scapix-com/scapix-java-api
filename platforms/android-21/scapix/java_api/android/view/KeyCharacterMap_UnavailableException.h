// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/util/AndroidRuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class KeyCharacterMap_UnavailableException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::KeyCharacterMap_UnavailableException>
{
	static constexpr fixed_string class_name = "android/view/KeyCharacterMap$UnavailableException";
	using base_classes = std::tuple<scapix::java_api::android::util::AndroidRuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::KeyCharacterMap_UnavailableException : public jni::object_base<"android/view/KeyCharacterMap$UnavailableException",
	android::util::AndroidRuntimeException>
{
public:

	static jni::ref<android::view::KeyCharacterMap_UnavailableException> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }

protected:

	KeyCharacterMap_UnavailableException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION
