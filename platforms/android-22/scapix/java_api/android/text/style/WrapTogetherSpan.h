// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/style/ParagraphStyle.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_WRAPTOGETHERSPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_WRAPTOGETHERSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class WrapTogetherSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::WrapTogetherSpan>
{
	static constexpr fixed_string class_name = "android/text/style/WrapTogetherSpan";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::style::ParagraphStyle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_WRAPTOGETHERSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_WRAPTOGETHERSPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_WRAPTOGETHERSPAN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::WrapTogetherSpan : public jni::object_base<"android/text/style/WrapTogetherSpan",
	java::lang::Object,
	android::text::style::ParagraphStyle>
{
public:


protected:

	WrapTogetherSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_WRAPTOGETHERSPAN