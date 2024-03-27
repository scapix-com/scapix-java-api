// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_HTML_TAGHANDLER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_HTML_TAGHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Html_TagHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Html_TagHandler>
{
	static constexpr fixed_string class_name = "android/text/Html$TagHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_HTML_TAGHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_HTML_TAGHANDLER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_HTML_TAGHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/Editable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Html_TagHandler : public jni::object_base<"android/text/Html$TagHandler",
	java::lang::Object>
{
public:

	void handleTag(jboolean p1, jni::ref<java::lang::String> p2, jni::ref<android::text::Editable> p3, jni::ref<org::xml::sax::XMLReader> p4) { return call_method<"handleTag", void>(p1, p2, p3, p4); }

protected:

	Html_TagHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_HTML_TAGHANDLER
