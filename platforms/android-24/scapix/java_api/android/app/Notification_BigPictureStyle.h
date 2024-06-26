// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Notification_Style.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_BigPictureStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_BigPictureStyle>
{
	static constexpr fixed_string class_name = "android/app/Notification$BigPictureStyle";
	using base_classes = std::tuple<scapix::java_api::android::app::Notification_Style>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification_Builder.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_BigPictureStyle : public jni::object_base<"android/app/Notification$BigPictureStyle",
	android::app::Notification_Style>
{
public:

	static jni::ref<android::app::Notification_BigPictureStyle> new_object() { return base_::new_object(); }
	static jni::ref<android::app::Notification_BigPictureStyle> new_object(jni::ref<android::app::Notification_Builder> builder) { return base_::new_object(builder); }
	jni::ref<android::app::Notification_BigPictureStyle> setBigContentTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setBigContentTitle", jni::ref<android::app::Notification_BigPictureStyle>>(title); }
	jni::ref<android::app::Notification_BigPictureStyle> setSummaryText(jni::ref<java::lang::CharSequence> cs) { return call_method<"setSummaryText", jni::ref<android::app::Notification_BigPictureStyle>>(cs); }
	jni::ref<android::app::Notification_BigPictureStyle> bigPicture(jni::ref<android::graphics::Bitmap> b) { return call_method<"bigPicture", jni::ref<android::app::Notification_BigPictureStyle>>(b); }
	jni::ref<android::app::Notification_BigPictureStyle> bigLargeIcon(jni::ref<android::graphics::Bitmap> b) { return call_method<"bigLargeIcon", jni::ref<android::app::Notification_BigPictureStyle>>(b); }
	jni::ref<android::app::Notification_BigPictureStyle> bigLargeIcon(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"bigLargeIcon", jni::ref<android::app::Notification_BigPictureStyle>>(icon); }

protected:

	Notification_BigPictureStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE
