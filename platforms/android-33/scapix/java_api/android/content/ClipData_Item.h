// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPDATA_ITEM_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPDATA_ITEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class ClipData_Item; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::ClipData_Item>
{
	static constexpr fixed_string class_name = "android/content/ClipData$Item";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPDATA_ITEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPDATA_ITEM)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPDATA_ITEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/view/textclassifier/TextLinks.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::ClipData_Item : public jni::object_base<"android/content/ClipData$Item",
	java::lang::Object>
{
public:

	static jni::ref<android::content::ClipData_Item> new_object(jni::ref<java::lang::CharSequence> text) { return base_::new_object(text); }
	static jni::ref<android::content::ClipData_Item> new_object(jni::ref<java::lang::CharSequence> text, jni::ref<java::lang::String> htmlText) { return base_::new_object(text, htmlText); }
	static jni::ref<android::content::ClipData_Item> new_object(jni::ref<android::content::Intent> intent) { return base_::new_object(intent); }
	static jni::ref<android::content::ClipData_Item> new_object(jni::ref<android::net::Uri> uri) { return base_::new_object(uri); }
	static jni::ref<android::content::ClipData_Item> new_object(jni::ref<java::lang::CharSequence> text, jni::ref<android::content::Intent> intent, jni::ref<android::net::Uri> uri) { return base_::new_object(text, intent, uri); }
	static jni::ref<android::content::ClipData_Item> new_object(jni::ref<java::lang::CharSequence> text, jni::ref<java::lang::String> htmlText, jni::ref<android::content::Intent> intent, jni::ref<android::net::Uri> uri) { return base_::new_object(text, htmlText, intent, uri); }
	jni::ref<java::lang::CharSequence> getText() { return call_method<"getText", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::String> getHtmlText() { return call_method<"getHtmlText", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::Intent> getIntent() { return call_method<"getIntent", jni::ref<android::content::Intent>>(); }
	jni::ref<android::net::Uri> getUri() { return call_method<"getUri", jni::ref<android::net::Uri>>(); }
	jni::ref<android::view::textclassifier::TextLinks> getTextLinks() { return call_method<"getTextLinks", jni::ref<android::view::textclassifier::TextLinks>>(); }
	jni::ref<java::lang::CharSequence> coerceToText(jni::ref<android::content::Context> context) { return call_method<"coerceToText", jni::ref<java::lang::CharSequence>>(context); }
	jni::ref<java::lang::CharSequence> coerceToStyledText(jni::ref<android::content::Context> context) { return call_method<"coerceToStyledText", jni::ref<java::lang::CharSequence>>(context); }
	jni::ref<java::lang::String> coerceToHtmlText(jni::ref<android::content::Context> context) { return call_method<"coerceToHtmlText", jni::ref<java::lang::String>>(context); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ClipData_Item(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CLIPDATA_ITEM