// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_ONPARAMETERCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_ONPARAMETERCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class Virtualizer_OnParameterChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::Virtualizer_OnParameterChangeListener>
{
	static constexpr fixed_string class_name = "android/media/audiofx/Virtualizer$OnParameterChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_ONPARAMETERCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_ONPARAMETERCHANGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_ONPARAMETERCHANGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/audiofx/Virtualizer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::Virtualizer_OnParameterChangeListener : public jni::object_base<"android/media/audiofx/Virtualizer$OnParameterChangeListener",
	java::lang::Object>
{
public:

	void onParameterChange(jni::ref<android::media::audiofx::Virtualizer> p1, jint p2, jint p3, jshort p4) { return call_method<"onParameterChange", void>(p1, p2, p3, p4); }

protected:

	Virtualizer_OnParameterChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_ONPARAMETERCHANGELISTENER
