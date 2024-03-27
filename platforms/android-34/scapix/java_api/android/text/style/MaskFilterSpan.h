// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/CharacterStyle.h>
#include <scapix/java_api/android/text/style/UpdateAppearance.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_MASKFILTERSPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_MASKFILTERSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class MaskFilterSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::MaskFilterSpan>
{
	static constexpr fixed_string class_name = "android/text/style/MaskFilterSpan";
	using base_classes = std::tuple<scapix::java_api::android::text::style::CharacterStyle, scapix::java_api::android::text::style::UpdateAppearance>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_MASKFILTERSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_MASKFILTERSPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_MASKFILTERSPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/MaskFilter.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::MaskFilterSpan : public jni::object_base<"android/text/style/MaskFilterSpan",
	android::text::style::CharacterStyle,
	android::text::style::UpdateAppearance>
{
public:

	static jni::ref<android::text::style::MaskFilterSpan> new_object(jni::ref<android::graphics::MaskFilter> filter) { return base_::new_object(filter); }
	jni::ref<android::graphics::MaskFilter> getMaskFilter() { return call_method<"getMaskFilter", jni::ref<android::graphics::MaskFilter>>(); }
	void updateDrawState(jni::ref<android::text::TextPaint> ds) { return call_method<"updateDrawState", void>(ds); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MaskFilterSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_MASKFILTERSPAN