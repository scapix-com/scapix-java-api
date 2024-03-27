// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class PrecomputedText_Params_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::PrecomputedText_Params_Builder>
{
	static constexpr fixed_string class_name = "android/text/PrecomputedText$Params$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/PrecomputedText_Params.h>
#include <scapix/java_api/android/text/TextDirectionHeuristic.h>
#include <scapix/java_api/android/text/TextPaint.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::PrecomputedText_Params_Builder : public jni::object_base<"android/text/PrecomputedText$Params$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::text::PrecomputedText_Params_Builder> new_object(jni::ref<android::text::TextPaint> paint) { return base_::new_object(paint); }
	jni::ref<android::text::PrecomputedText_Params_Builder> setBreakStrategy(jint strategy) { return call_method<"setBreakStrategy", jni::ref<android::text::PrecomputedText_Params_Builder>>(strategy); }
	jni::ref<android::text::PrecomputedText_Params_Builder> setHyphenationFrequency(jint frequency) { return call_method<"setHyphenationFrequency", jni::ref<android::text::PrecomputedText_Params_Builder>>(frequency); }
	jni::ref<android::text::PrecomputedText_Params_Builder> setTextDirection(jni::ref<android::text::TextDirectionHeuristic> textDir) { return call_method<"setTextDirection", jni::ref<android::text::PrecomputedText_Params_Builder>>(textDir); }
	jni::ref<android::text::PrecomputedText_Params> build() { return call_method<"build", jni::ref<android::text::PrecomputedText_Params>>(); }

protected:

	PrecomputedText_Params_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER
