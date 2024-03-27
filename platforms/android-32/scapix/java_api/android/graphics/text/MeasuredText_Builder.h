// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::text { class MeasuredText_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::text::MeasuredText_Builder>
{
	static constexpr fixed_string class_name = "android/graphics/text/MeasuredText$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/text/MeasuredText.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::text::MeasuredText_Builder : public jni::object_base<"android/graphics/text/MeasuredText$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::text::MeasuredText_Builder> new_object(jni::ref<jni::array<jchar>> text) { return base_::new_object(text); }
	static jni::ref<android::graphics::text::MeasuredText_Builder> new_object(jni::ref<android::graphics::text::MeasuredText> text) { return base_::new_object(text); }
	jni::ref<android::graphics::text::MeasuredText_Builder> appendStyleRun(jni::ref<android::graphics::Paint> paint, jint length, jboolean isRtl) { return call_method<"appendStyleRun", jni::ref<android::graphics::text::MeasuredText_Builder>>(paint, length, isRtl); }
	jni::ref<android::graphics::text::MeasuredText_Builder> appendReplacementRun(jni::ref<android::graphics::Paint> paint, jint length, jfloat width) { return call_method<"appendReplacementRun", jni::ref<android::graphics::text::MeasuredText_Builder>>(paint, length, width); }
	jni::ref<android::graphics::text::MeasuredText_Builder> setComputeHyphenation(jboolean computeHyphenation) { return call_method<"setComputeHyphenation", jni::ref<android::graphics::text::MeasuredText_Builder>>(computeHyphenation); }
	jni::ref<android::graphics::text::MeasuredText_Builder> setComputeLayout(jboolean computeLayout) { return call_method<"setComputeLayout", jni::ref<android::graphics::text::MeasuredText_Builder>>(computeLayout); }
	jni::ref<android::graphics::text::MeasuredText> build() { return call_method<"build", jni::ref<android::graphics::text::MeasuredText>>(); }

protected:

	MeasuredText_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TEXT_MEASUREDTEXT_BUILDER
