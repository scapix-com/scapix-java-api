// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class TextAttribute_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::TextAttribute_Builder>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/TextAttribute$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/android/view/inputmethod/TextAttribute.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::TextAttribute_Builder : public jni::object_base<"android/view/inputmethod/TextAttribute$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::inputmethod::TextAttribute_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::view::inputmethod::TextAttribute_Builder> setTextConversionSuggestions(jni::ref<java::util::List> textConversionSuggestions) { return call_method<"setTextConversionSuggestions", jni::ref<android::view::inputmethod::TextAttribute_Builder>>(textConversionSuggestions); }
	jni::ref<android::view::inputmethod::TextAttribute_Builder> setExtras(jni::ref<android::os::PersistableBundle> extras) { return call_method<"setExtras", jni::ref<android::view::inputmethod::TextAttribute_Builder>>(extras); }
	jni::ref<android::view::inputmethod::TextAttribute> build() { return call_method<"build", jni::ref<android::view::inputmethod::TextAttribute>>(); }

protected:

	TextAttribute_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_BUILDER
