// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_EDGEEFFECT_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_EDGEEFFECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class EdgeEffect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::EdgeEffect>
{
	static constexpr fixed_string class_name = "android/widget/EdgeEffect";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_EDGEEFFECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_EDGEEFFECT)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_EDGEEFFECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::EdgeEffect : public jni::object_base<"android/widget/EdgeEffect",
	java::lang::Object>
{
public:

	static jni::ref<android::widget::EdgeEffect> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void setSize(jint width, jint height) { return call_method<"setSize", void>(width, height); }
	jboolean isFinished() { return call_method<"isFinished", jboolean>(); }
	void finish() { return call_method<"finish", void>(); }
	void onPull(jfloat deltaDistance) { return call_method<"onPull", void>(deltaDistance); }
	void onPull(jfloat deltaDistance, jfloat displacement) { return call_method<"onPull", void>(deltaDistance, displacement); }
	void onRelease() { return call_method<"onRelease", void>(); }
	void onAbsorb(jint velocity) { return call_method<"onAbsorb", void>(velocity); }
	void setColor(jint color) { return call_method<"setColor", void>(color); }
	jint getColor() { return call_method<"getColor", jint>(); }
	jboolean draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", jboolean>(canvas); }
	jint getMaxHeight() { return call_method<"getMaxHeight", jint>(); }

protected:

	EdgeEffect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_EDGEEFFECT
