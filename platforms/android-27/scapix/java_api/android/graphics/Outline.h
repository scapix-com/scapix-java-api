// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_OUTLINE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_OUTLINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Outline; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Outline>
{
	static constexpr fixed_string class_name = "android/graphics/Outline";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_OUTLINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_OUTLINE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_OUTLINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Path.h>
#include <scapix/java_api/android/graphics/Rect.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Outline : public jni::object_base<"android/graphics/Outline",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::Outline> new_object() { return base_::new_object(); }
	static jni::ref<android::graphics::Outline> new_object(jni::ref<android::graphics::Outline> src) { return base_::new_object(src); }
	void setEmpty() { return call_method<"setEmpty", void>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean canClip() { return call_method<"canClip", jboolean>(); }
	void setAlpha(jfloat alpha) { return call_method<"setAlpha", void>(alpha); }
	jfloat getAlpha() { return call_method<"getAlpha", jfloat>(); }
	void set(jni::ref<android::graphics::Outline> src) { return call_method<"set", void>(src); }
	void setRect(jint left, jint top, jint right, jint bottom) { return call_method<"setRect", void>(left, top, right, bottom); }
	void setRect(jni::ref<android::graphics::Rect> rect) { return call_method<"setRect", void>(rect); }
	void setRoundRect(jint left, jint top, jint right, jint bottom, jfloat radius) { return call_method<"setRoundRect", void>(left, top, right, bottom, radius); }
	void setRoundRect(jni::ref<android::graphics::Rect> rect, jfloat radius) { return call_method<"setRoundRect", void>(rect, radius); }
	jboolean getRect(jni::ref<android::graphics::Rect> outRect) { return call_method<"getRect", jboolean>(outRect); }
	jfloat getRadius() { return call_method<"getRadius", jfloat>(); }
	void setOval(jint left, jint top, jint right, jint bottom) { return call_method<"setOval", void>(left, top, right, bottom); }
	void setOval(jni::ref<android::graphics::Rect> rect) { return call_method<"setOval", void>(rect); }
	void setConvexPath(jni::ref<android::graphics::Path> convexPath) { return call_method<"setConvexPath", void>(convexPath); }
	void offset(jint dx, jint dy) { return call_method<"offset", void>(dx, dy); }

protected:

	Outline(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_OUTLINE
