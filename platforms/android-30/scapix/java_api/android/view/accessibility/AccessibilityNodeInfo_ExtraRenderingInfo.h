// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_EXTRARENDERINGINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_EXTRARENDERINGINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::accessibility { class AccessibilityNodeInfo_ExtraRenderingInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::accessibility::AccessibilityNodeInfo_ExtraRenderingInfo>
{
	static constexpr fixed_string class_name = "android/view/accessibility/AccessibilityNodeInfo$ExtraRenderingInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_EXTRARENDERINGINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_EXTRARENDERINGINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_EXTRARENDERINGINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/util/Size.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::accessibility::AccessibilityNodeInfo_ExtraRenderingInfo : public jni::object_base<"android/view/accessibility/AccessibilityNodeInfo$ExtraRenderingInfo",
	java::lang::Object>
{
public:

	jni::ref<android::util::Size> getLayoutSize() { return call_method<"getLayoutSize", jni::ref<android::util::Size>>(); }
	jfloat getTextSizeInPx() { return call_method<"getTextSizeInPx", jfloat>(); }
	jint getTextSizeUnit() { return call_method<"getTextSizeUnit", jint>(); }

protected:

	AccessibilityNodeInfo_ExtraRenderingInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_EXTRARENDERINGINFO