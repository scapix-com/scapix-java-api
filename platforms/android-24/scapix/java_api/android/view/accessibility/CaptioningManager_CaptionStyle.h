// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::accessibility { class CaptioningManager_CaptionStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::accessibility::CaptioningManager_CaptionStyle>
{
	static constexpr fixed_string class_name = "android/view/accessibility/CaptioningManager$CaptionStyle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Typeface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::accessibility::CaptioningManager_CaptionStyle : public jni::object_base<"android/view/accessibility/CaptioningManager$CaptionStyle",
	java::lang::Object>
{
public:

	static jint EDGE_TYPE_DEPRESSED() { return get_static_field<"EDGE_TYPE_DEPRESSED", jint>(); }
	static jint EDGE_TYPE_DROP_SHADOW() { return get_static_field<"EDGE_TYPE_DROP_SHADOW", jint>(); }
	static jint EDGE_TYPE_NONE() { return get_static_field<"EDGE_TYPE_NONE", jint>(); }
	static jint EDGE_TYPE_OUTLINE() { return get_static_field<"EDGE_TYPE_OUTLINE", jint>(); }
	static jint EDGE_TYPE_RAISED() { return get_static_field<"EDGE_TYPE_RAISED", jint>(); }
	static jint EDGE_TYPE_UNSPECIFIED() { return get_static_field<"EDGE_TYPE_UNSPECIFIED", jint>(); }
	jint backgroundColor() { return get_field<"backgroundColor", jint>(); }
	jint edgeColor() { return get_field<"edgeColor", jint>(); }
	jint edgeType() { return get_field<"edgeType", jint>(); }
	jint foregroundColor() { return get_field<"foregroundColor", jint>(); }
	jint windowColor() { return get_field<"windowColor", jint>(); }

	jboolean hasBackgroundColor() { return call_method<"hasBackgroundColor", jboolean>(); }
	jboolean hasForegroundColor() { return call_method<"hasForegroundColor", jboolean>(); }
	jboolean hasEdgeType() { return call_method<"hasEdgeType", jboolean>(); }
	jboolean hasEdgeColor() { return call_method<"hasEdgeColor", jboolean>(); }
	jboolean hasWindowColor() { return call_method<"hasWindowColor", jboolean>(); }
	jni::ref<android::graphics::Typeface> getTypeface() { return call_method<"getTypeface", jni::ref<android::graphics::Typeface>>(); }

protected:

	CaptioningManager_CaptionStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE
