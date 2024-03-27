// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextClassificationContext_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextClassificationContext_Builder>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextClassificationContext$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/textclassifier/TextClassificationContext.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextClassificationContext_Builder : public jni::object_base<"android/view/textclassifier/TextClassificationContext$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::textclassifier::TextClassificationContext_Builder> new_object(jni::ref<java::lang::String> packageName, jni::ref<java::lang::String> widgetType) { return base_::new_object(packageName, widgetType); }
	jni::ref<android::view::textclassifier::TextClassificationContext_Builder> setWidgetVersion(jni::ref<java::lang::String> widgetVersion) { return call_method<"setWidgetVersion", jni::ref<android::view::textclassifier::TextClassificationContext_Builder>>(widgetVersion); }
	jni::ref<android::view::textclassifier::TextClassificationContext> build() { return call_method<"build", jni::ref<android::view::textclassifier::TextClassificationContext>>(); }

protected:

	TextClassificationContext_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT_BUILDER