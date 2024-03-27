// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InputMethodSubtype_InputMethodSubtypeBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/inputmethod/InputMethodSubtype.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder : public jni::object_base<"android/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> new_object() { return base_::new_object(); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setIsAuxiliary(jboolean isAuxiliary) { return call_method<"setIsAuxiliary", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(isAuxiliary); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setOverridesImplicitlyEnabledSubtype(jboolean overridesImplicitlyEnabledSubtype) { return call_method<"setOverridesImplicitlyEnabledSubtype", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(overridesImplicitlyEnabledSubtype); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setIsAsciiCapable(jboolean isAsciiCapable) { return call_method<"setIsAsciiCapable", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(isAsciiCapable); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setSubtypeIconResId(jint subtypeIconResId) { return call_method<"setSubtypeIconResId", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(subtypeIconResId); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setSubtypeNameResId(jint subtypeNameResId) { return call_method<"setSubtypeNameResId", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(subtypeNameResId); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setSubtypeId(jint subtypeId) { return call_method<"setSubtypeId", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(subtypeId); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setSubtypeLocale(jni::ref<java::lang::String> subtypeLocale) { return call_method<"setSubtypeLocale", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(subtypeLocale); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setLanguageTag(jni::ref<java::lang::String> languageTag) { return call_method<"setLanguageTag", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(languageTag); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setSubtypeMode(jni::ref<java::lang::String> subtypeMode) { return call_method<"setSubtypeMode", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(subtypeMode); }
	jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder> setSubtypeExtraValue(jni::ref<java::lang::String> subtypeExtraValue) { return call_method<"setSubtypeExtraValue", jni::ref<android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder>>(subtypeExtraValue); }
	jni::ref<android::view::inputmethod::InputMethodSubtype> build() { return call_method<"build", jni::ref<android::view::inputmethod::InputMethodSubtype>>(); }

protected:

	InputMethodSubtype_InputMethodSubtypeBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER
