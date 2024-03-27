// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_PICTUREINPICTUREPARAMS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_PICTUREINPICTUREPARAMS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class PictureInPictureParams_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::PictureInPictureParams_Builder>
{
	static constexpr fixed_string class_name = "android/app/PictureInPictureParams$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_PICTUREINPICTUREPARAMS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_PICTUREINPICTUREPARAMS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_PICTUREINPICTUREPARAMS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PictureInPictureParams.h>
#include <scapix/java_api/android/app/RemoteAction.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/util/Rational.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::PictureInPictureParams_Builder : public jni::object_base<"android/app/PictureInPictureParams$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::PictureInPictureParams_Builder> new_object() { return base_::new_object(); }
	static jni::ref<android::app::PictureInPictureParams_Builder> new_object(jni::ref<android::app::PictureInPictureParams> original) { return base_::new_object(original); }
	jni::ref<android::app::PictureInPictureParams_Builder> setAspectRatio(jni::ref<android::util::Rational> aspectRatio) { return call_method<"setAspectRatio", jni::ref<android::app::PictureInPictureParams_Builder>>(aspectRatio); }
	jni::ref<android::app::PictureInPictureParams_Builder> setExpandedAspectRatio(jni::ref<android::util::Rational> expandedAspectRatio) { return call_method<"setExpandedAspectRatio", jni::ref<android::app::PictureInPictureParams_Builder>>(expandedAspectRatio); }
	jni::ref<android::app::PictureInPictureParams_Builder> setActions(jni::ref<java::util::List> actions) { return call_method<"setActions", jni::ref<android::app::PictureInPictureParams_Builder>>(actions); }
	jni::ref<android::app::PictureInPictureParams_Builder> setCloseAction(jni::ref<android::app::RemoteAction> action) { return call_method<"setCloseAction", jni::ref<android::app::PictureInPictureParams_Builder>>(action); }
	jni::ref<android::app::PictureInPictureParams_Builder> setSourceRectHint(jni::ref<android::graphics::Rect> launchBounds) { return call_method<"setSourceRectHint", jni::ref<android::app::PictureInPictureParams_Builder>>(launchBounds); }
	jni::ref<android::app::PictureInPictureParams_Builder> setAutoEnterEnabled(jboolean autoEnterEnabled) { return call_method<"setAutoEnterEnabled", jni::ref<android::app::PictureInPictureParams_Builder>>(autoEnterEnabled); }
	jni::ref<android::app::PictureInPictureParams_Builder> setSeamlessResizeEnabled(jboolean seamlessResizeEnabled) { return call_method<"setSeamlessResizeEnabled", jni::ref<android::app::PictureInPictureParams_Builder>>(seamlessResizeEnabled); }
	jni::ref<android::app::PictureInPictureParams_Builder> setTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setTitle", jni::ref<android::app::PictureInPictureParams_Builder>>(title); }
	jni::ref<android::app::PictureInPictureParams_Builder> setSubtitle(jni::ref<java::lang::CharSequence> subtitle) { return call_method<"setSubtitle", jni::ref<android::app::PictureInPictureParams_Builder>>(subtitle); }
	jni::ref<android::app::PictureInPictureParams> build() { return call_method<"build", jni::ref<android::app::PictureInPictureParams>>(); }

protected:

	PictureInPictureParams_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_PICTUREINPICTUREPARAMS_BUILDER
