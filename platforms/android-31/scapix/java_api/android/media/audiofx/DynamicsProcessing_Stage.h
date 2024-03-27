// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class DynamicsProcessing_Stage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::DynamicsProcessing_Stage>
{
	static constexpr fixed_string class_name = "android/media/audiofx/DynamicsProcessing$Stage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::DynamicsProcessing_Stage : public jni::object_base<"android/media/audiofx/DynamicsProcessing$Stage",
	java::lang::Object>
{
public:

	static jni::ref<android::media::audiofx::DynamicsProcessing_Stage> new_object(jboolean inUse, jboolean enabled) { return base_::new_object(inUse, enabled); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void setEnabled(jboolean enabled) { return call_method<"setEnabled", void>(enabled); }
	jboolean isInUse() { return call_method<"isInUse", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DynamicsProcessing_Stage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE
