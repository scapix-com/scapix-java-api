// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InlineSuggestionsRequest_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InlineSuggestionsRequest_Builder>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InlineSuggestionsRequest$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/view/inputmethod/InlineSuggestionsRequest.h>
#include <scapix/java_api/android/widget/inline/InlinePresentationSpec.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InlineSuggestionsRequest_Builder : public jni::object_base<"android/view/inputmethod/InlineSuggestionsRequest$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder> new_object(jni::ref<java::util::List> inlinePresentationSpecs) { return base_::new_object(inlinePresentationSpecs); }
	jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder> setMaxSuggestionCount(jint value) { return call_method<"setMaxSuggestionCount", jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder>>(value); }
	jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder> setInlinePresentationSpecs(jni::ref<java::util::List> value) { return call_method<"setInlinePresentationSpecs", jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder>>(value); }
	jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder> addInlinePresentationSpecs(jni::ref<android::widget::inline_::InlinePresentationSpec> value) { return call_method<"addInlinePresentationSpecs", jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder>>(value); }
	jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder> setSupportedLocales(jni::ref<android::os::LocaleList> value) { return call_method<"setSupportedLocales", jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder>>(value); }
	jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder> setExtras(jni::ref<android::os::Bundle> value) { return call_method<"setExtras", jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder>>(value); }
	jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder> setInlineTooltipPresentationSpec(jni::ref<android::widget::inline_::InlinePresentationSpec> value) { return call_method<"setInlineTooltipPresentationSpec", jni::ref<android::view::inputmethod::InlineSuggestionsRequest_Builder>>(value); }
	jni::ref<android::view::inputmethod::InlineSuggestionsRequest> build() { return call_method<"build", jni::ref<android::view::inputmethod::InlineSuggestionsRequest>>(); }

protected:

	InlineSuggestionsRequest_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_BUILDER
